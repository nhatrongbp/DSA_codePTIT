#include <bits/stdc++.h>
using namespace std;
int solve()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,w;cin>>n>>w;
	int wei[n+5],val[n+5];
	for(int i=1;i<=n;++i)cin>>wei[i];
	for(int i=1;i<=n;++i)cin>>val[i];
	long long dp[n+5][w+5];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;++i){
		for(int j=0;j<=w;++j){
			dp[i][j]=dp[i-1][j];
			if(j>=wei[i])dp[i][j]=max(dp[i][j],dp[i-1][j-wei[i]]+val[i]);
		}
	}
	/*for(int i=0;i<=n;++i){
		for(int j=0;j<=w;++j)cout<<dp[i][j]<<'\t';
		cout<<endl;
	}*/
	cout<<dp[n][w];
	return 0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		solve();
		cout<<'\n';
	}
	return 0;
}
