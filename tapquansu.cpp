#include <bits/stdc++.h>
using namespace std;
int t,r,a,m[45],x,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		set<int> s;
		for(i=1;i<=k;++i){
			cin>>m[i];
			s.insert(m[i]);
		}
		r=0;
		for(i=k;i>0;--i){
			if(m[i]<n-k+i){
				++m[i];
				if(s.find(m[i])==s.end())++r;
				for(x=i+1;x<=k;++x){
					m[x]=m[x-1]+1;
					if(s.find(m[x])==s.end())++r;
				}
				break;
			}
		}
		if(i==0)cout<<k<<"\n";
		else cout<<r<<"\n";
	}
	return 0;
}

