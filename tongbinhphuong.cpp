#include <bits/stdc++.h>
using namespace std;
int t,n,dp[10005];
int main()
{
	dp[0]=0;dp[1]=1;dp[2]=2;dp[3]=3;
	for(int i=4;i<=10000;++i){
		dp[i]=dp[i-1]+1;
		for(int j=2;j*j<=i;++j){
			dp[i]=min(dp[i],dp[i-j*j]+1);
		}
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n]<<"\n";
	}
	return 0;
}/*
0	1	2	3	4	5	6
0	1	2	3	1	2	3
*/	
