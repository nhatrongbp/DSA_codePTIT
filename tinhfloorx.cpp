#include <bits/stdc++.h>
using namespace std;
int t,r,a,m,x,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>x;
		r=-1;k=-1;
		for(i=0;i<n;++i){
			cin>>a;
			if(a<=x){
				if(a>k){
					k=a;
					r=i+1;
				}
			}
		}
		cout<<r<<"\n";
	}
	return 0;
}

