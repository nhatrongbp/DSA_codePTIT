#include <bits/stdc++.h>
using namespace std;
int t,n,dp[100005]={0};
int main()
{
	for(int i=1;i<=100004;++i){
		if(i+1<=100004){
			if(dp[i+1]==0)dp[i+1]=dp[i]+1;
			else dp[i+1]=min(dp[i+1],dp[i]+1);
		}
		if(i*2<=100004){
			if(dp[i*2]==0)dp[i*2]=dp[i]+1;
			else dp[i*2]=min(dp[i*2],dp[i]+1);
		}
		if(i*3<=100004){
			if(dp[i*3]==0)dp[i*3]=dp[i]+1;
			else dp[i*3]=min(dp[i*3],dp[i]+1);
		}
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n]<<"\n";
	}
	return 0;
}/*
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15
0	1	1	2	3	2	3	3	2	3	4	3	4	4	4*/
