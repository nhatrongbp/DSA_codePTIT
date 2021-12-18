#include <bits/stdc++.h>
using namespace std;
string s;
int d,a[26];
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>d>>s;
		memset(a,0,sizeof(a));
		int sum=0;
		for(int i=0;i<s.length();i++){
			a[s[i]-'A']++;
			sum=max(sum,a[s[i]-'A']);
		}
		/*if(s.length()%2==0&&sum<=s.length()/2)cout<<"1"<<endl;
		else if(s.length()%2==1&&sum<=(s.length()/2+1))cout<<"1"<<endl;
		else cout<<"-1"<<endl;*/
		if(sum-1<=(s.length()-1)/d)cout<<"1\n";
		else cout<<"-1\n";
	}
}

