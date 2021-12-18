#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h[3];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;h[0]=0;h[1]=0;h[2]=0;
		for(i=0;i<n;++i){
			cin>>r;++h[r];
		}
		for(i=0;i<3;++i){
			for(r=0;r<h[i];++r)cout<<i<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

