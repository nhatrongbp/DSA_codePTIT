#include <bits/stdc++.h>
using namespace std;
int t,r,i,j,n,h[1005];
int vtr()
{
	for(i=0;i<n-1;++i){
		for(j=i+1;j<n;++j){
			if(abs(h[i]+h[j])<abs(r)){
				r=h[i]+h[j];
				if(r==0)return r;
			}
		}
	}
	return r;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;r=2000005;
		for(i=0;i<n;++i)cin>>h[i];
		cout<<vtr()<<"\n";
	}
	return 0;
}
