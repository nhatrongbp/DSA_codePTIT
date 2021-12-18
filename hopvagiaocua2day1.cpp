#include <bits/stdc++.h>
using namespace std;
int t,m,i,n,h[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;
		set<int> s1,s2;
		for(i=0;i<n;++i){
			cin>>h[0];
			s1.insert(h[0]);
			s2.insert(h[0]);
		}
		for(i=0;i<m;++i){
			cin>>h[i];
			s1.insert(h[i]);
		}
		for(set<int> ::iterator it=s1.begin();it!=s1.end();++it){
			cout<<*it<<' ';
		}
		cout<<"\n";
		for(i=0;i<m;++i){
			if(s2.find(h[i])!=s2.end())cout<<h[i]<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

