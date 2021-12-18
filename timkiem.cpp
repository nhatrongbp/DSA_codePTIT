#include <bits/stdc++.h>
using namespace std;
int e,t,r,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;r=-1;
		for(i=0;i<n;++i){
			cin>>e;
			if(e==k)r=1;
		}
		cout<<r<<"\n";
	}
	return 0;
}

