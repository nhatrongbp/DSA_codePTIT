#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k[1005];cin>>t;
	while(t--){
		cin>>n>>k[0];
		for(int i=1;i<=k[0];++i)cin>>k[i];
		for(int i=k[0];i>=1;--i){
			if(k[i]<n-k[0]+i){
				++k[i];
				for(int j=i+1;j<=k[0];++j)k[j]=k[j-1]+1;
				break;
			}
			if(i==1&&k[i]==n-k[i]+i){
				for(int j=1;j<=k[0];++j)k[j]=j;
			}
		}
		for(int i=1;i<=k[0];++i)cout<<k[i]<<' ';
		cout<<"\n";
	}
	return 0;
}

