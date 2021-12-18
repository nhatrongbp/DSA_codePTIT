#include <bits/stdc++.h>
using namespace std;

int main()
{
	short t,n[15];cin>>t;
	while(t--){
		memset(n,0,sizeof(n));
		cin>>n[0];
		for(int i=1;i<=n[0];++i){
			if(n[i])cout<<'B';
			else cout<<'A';
		}
		cout<<' ';
		for(int i=1;i<pow(2,n[0]);++i){
			for(int j=n[0];j>0;--j){
				if(n[j]==0){
					n[j]=1;break;
				}
				else n[j]=0;
			}
			for(int i=1;i<=n[0];++i){
				if(n[i])cout<<'B';
				else cout<<'A';
			}
			cout<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

