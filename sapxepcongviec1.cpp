#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		pair<int,int> p[n];
		for(int i=0;i<n;++i)cin>>p[i].second;//start
		for(int i=0;i<n;++i)cin>>p[i].first;//finish
		sort(p,p+n);
		int res=1,finish=p[0].first;
		for(int i=1;i<n;++i){
			if(p[i].second>=finish){
				++res;
				finish=p[i].first;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

