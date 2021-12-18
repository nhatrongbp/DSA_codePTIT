/*#include <bits/stdc++.h>
using namespace std;
int t,a,n,k,dp[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;++i){
			cin>>a;
			if(i==0)dp[i]=a%k;
			else dp[i]=(dp[i-1]+a)%k;
		}
		//for(int i=0;i<n;++i)cout<<dp[i]<<' ';
		int res=0;
		if(dp[0]==0)res=1;
		for(int i=1;i<n;++i){
			if(dp[i]==0)res=max(res,i+1);
			for(int j=0;j<i;++j){
				if((dp[i]+k-dp[j])%k==0){
					res=max(res,i-j);
				}
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}*//*
		2	3	5	7	9	6	12	7	11	15
sum[0i]	2	2	1	2	2	2	2	0	2	2*/
#include <bits/stdc++.h>
using namespace std;
//longest subsequence whose sum is divisible by k
int t, a[1005], n, k, dp[1005][55];
int main()
{
	string s = "B19OLP081";
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=n; ++i){
			cin >> a[i];
			a[i] %= k;
		}
		for(int j=0; j<k; ++j) dp[1][j] = 0;
		dp[1][a[1]%k] = 1;
		int res = dp[1][0];
		for(int i=2; i<=n; ++i){
			for(int j=0; j<k; ++j){
				dp[i][j] = dp[i-1][j];
				if(dp[i-1][(j+k-a[i])%k] > 0)
				dp[i][j] = max(dp[i-1][j], dp[i-1][(j+k-a[i])%k] + 1);
			}
			res = max(res, dp[i][0]);
		}
		cout << res << "\n";
		/*for(int i=0; i<=n; ++i){
			for(int j=0; j<k; ++j){
				cout<<dp[i][j]<<'\t';
			}
			cout<<endl;
		}
		cout<<endl;*/
	}
	return 0;
}
