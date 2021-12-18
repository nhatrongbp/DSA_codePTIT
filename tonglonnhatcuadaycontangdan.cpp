#include <bits/stdc++.h>
using namespace std;
int t,n,res,a[1005],dp[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a[i];
			dp[i]=a[i];
		}
		res=a[0];
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[i]>a[j]&&dp[j]+a[i]>dp[i]){
					dp[i]=dp[j]+a[i];
					res=max(res,dp[i]);
				}
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

