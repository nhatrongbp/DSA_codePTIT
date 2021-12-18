#include <bits/stdc++.h>
using namespace std;
int stringtoi(string str)
{
	int r=0;
	for(int i=0;i<str.length();++i){
		r=r*10+int(str[i]-'0');
	}
	return r;
}
int main()
{
	string s,tamp;
	int n;cin>>n;
	short a[n][n];
	memset(a,0,sizeof(a));
	getline(cin,s);
	for(int i=0;i<n;++i){
		getline(cin,s);
		stringstream ss(s);
		while(ss>>tamp){
			a[i][stringtoi(tamp)-1]=1;
			a[stringtoi(tamp)-1][i]=1;
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j)cout<<a[i][j]<<' ';
		cout<<"\n";
	}
	return 0;
}

