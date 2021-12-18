#include <bits/stdc++.h>
using namespace std;
int t,n,x,y,z,dp[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>x>>y>>z;
		dp[0]=0;dp[1]=x;
		for(int i=2;i<=2*n;++i){
			if(i%2==0)dp[i]=min(dp[i-1]+x,dp[i/2]+z);
			else dp[i]=min(dp[i-1]+x,dp[i/2+1]+y+z);
		}
		cout<<dp[n]<<"\n";
	}
	return 0;
}

