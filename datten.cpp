#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k[1005];cin>>t;
	while(t--){
		cin>>n>>k[0];
		bool bull=true;
		for(int i=1;i<=k[0];++i){
			k[i]=i;
			cout<<char(k[i]+'A'-1);
		}
		cout<<"\n";
		while(bull){
			for(int i=k[0];i>=1;--i){
				if(k[i]<n-k[0]+i){
					++k[i];
					for(int j=i+1;j<=k[0];++j)k[j]=k[j-1]+1;
					break;
				}
			}
			for(int i=1;i<=k[0];++i)cout<<char(k[i]+'A'-1);cout<<"\n";
			if(k[1]==n-k[0]+1)bull=false;
		}
	}
	return 0;
}


