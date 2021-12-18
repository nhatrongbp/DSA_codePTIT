#include <bits/stdc++.h>
using namespace std;
int e,t,r,i,n,k;
bool bull;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;r=-1;bull=true;
		for(i=0;i<n;++i){
			cin>>e;
			if(e==k&&bull){
				bull=false;
				r=i+1;
			}
		}
		if(r>0)cout<<r<<"\n";
		else cout<<"NO\n";
	}
	return 0;
}

