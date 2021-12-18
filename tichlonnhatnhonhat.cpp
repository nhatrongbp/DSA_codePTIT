#include <bits/stdc++.h>
using namespace std;
int t,r,a,m,x,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;
		cin>>r;
		for(i=1;i<n;++i){
			cin>>a;
			r=max(r,a);
		}
		cin>>x;
		for(i=1;i<m;++i){
			cin>>k;
			x=min(x,k);
		}
		cout<<(long long)r*x<<"\n";
	}
	return 0;
}

