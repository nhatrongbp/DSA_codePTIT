#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,w;
	cin>>n>>w;
	int a[n+5],c[n+5],res[n+5]={0},xopt[n+5]={0},fopt=0;
	for(int i=0;i<n;++i)cin>>c[i];
	for(int i=0;i<n;++i)cin>>a[i];
	while(true){
		int i;
		for(i=n-1;i>=0;--i){
			if(res[i]==0){
				res[i]=1;
				break;
			}
			else res[i]=0;
		}
		if(i==-1)break;
		int net=0,val=0;
		for(int j=0;j<n;++j){
			net+=a[j]*res[j];
			val+=c[j]*res[j];
			if(net>w)break;
		}
		if(net<=w&&val>fopt){
			fopt=val;
			for(int j=0;j<n;++j)xopt[j]=res[j];
		}
	}
	cout<<fopt<<"\n";
	for(int i=0;i<n;++i)cout<<xopt[i]<<' ';
	return 0;
}

