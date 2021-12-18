#include <bits/stdc++.h>
using namespace std;
int t,n,k;
long long a[55];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;k=3;
		a[0]=1;
		a[1]=1;
		for(int i=2;i<=n;++i){
			a[i]=0;
			for(int j=1;j<=k;++j){
				if(i-j>=0)a[i]=(a[i]+a[i-j]);
			}
			//cout<<a[i]<<endl;
		}
		cout<<a[n]<<"\n";
	}
	return 0;
}

