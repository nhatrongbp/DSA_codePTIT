#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k[1005];cin>>t;
	while(t--){
		bool bull=true;
		cin>>n>>k[0];
		for(int i=1;i<=k[0];++i){
			cin>>k[i];
			if(k[i]!=i)bull=false;
		}
		if(bull){
			for(int i=1;i<=k[0];++i)cout<<n-k[0]+i<<' ';
			cout<<"\n";
			continue;
		}
		int i=k[0];
		for(i=k[0];i>1;--i){
			if(k[i]-k[i-1]>1){
				--k[i];
				for(int j=i+1;j<=k[0];++j)k[j]=n-k[0]+j;
				break;
			}
		}
		if(i==1){
			--k[1];
			for(int j=i+1;j<=k[0];++j)k[j]=n-k[0]+j;
		}
		for(int i=1;i<=k[0];++i)cout<<k[i]<<' ';
		cout<<"\n";
	}
	return 0;
}/*
123
124
125
134
135
145
234
235
245
345*/

