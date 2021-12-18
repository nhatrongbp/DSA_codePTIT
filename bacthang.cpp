#include <bits/stdc++.h>
using namespace std;
int t,n,k,a[100005],m=1e9+7;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		a[0]=1;
		a[1]=1;
		for(int i=2;i<=n;++i){
			a[i]=0;
			for(int j=1;j<=k;++j){
				if(i-j>=0)a[i]=(a[i]+a[i-j])%m;
			}
			//cout<<a[i]<<endl;
		}
		cout<<a[n]<<"\n";
	}
	return 0;
}

