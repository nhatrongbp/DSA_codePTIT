#include <bits/stdc++.h>
using namespace std;
string s;
int a[26];
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		memset(a,0,sizeof(a));
		int sum=0;
		for(int i=0;i<s.length();i++){
			a[s[i]-'a']++;
			sum=max(sum,a[s[i]-'a']);
		}
		if(s.length()%2==0&&sum<=s.length()/2)cout<<"1"<<endl;
		else if(s.length()%2==1&&sum<=(s.length()/2+1))cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}

