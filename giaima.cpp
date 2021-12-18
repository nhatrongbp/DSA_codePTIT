#include <bits/stdc++.h>
using namespace std;
int t;
long long a[45];
string s;
int main()
{
	cin>>t;
	while(t--){
		cin>>s;
		a[0]=1;a[1]=1;
		if(s[0]=='0'){
			cout<<"0\n";
			continue;
		}
		for(int i=2;i<=s.length();++i){
			a[i]=0;
			if(s[i-1]>'0') a[i]=a[i-1];//neu s[i-1]>0 thi viec co lap s[i-1] la 1 cach
			if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7'))a[i]+=a[i-2];
			//neu s[i-1] dinh duoc voi s[i-2] thi co lap s[i-1]s[i-2] la 1 cach nua
		}
		cout<<a[s.length()]<<"\n";
	}
	return 0;
}
/*
	1	2	3
1	1	2	3
	
	2	5	6	3
1	1	2	2	2*/
