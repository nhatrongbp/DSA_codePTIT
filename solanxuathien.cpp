#include <bits/stdc++.h>
using namespace std;
int e,t,r,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;r=0;
		for(i=0;i<n;++i){
			cin>>e;
			if(e==k)++r;
		}
		if(r)cout<<r<<"\n";
		else cout<<"-1\n";
	}
	return 0;
}

