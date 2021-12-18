#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long dp[30][30];
	for(int i=0;i<=25;++i){
		for(int j=0;j<=25;++j){
			if(i==0||j==0)dp[i][j]=1;
			else dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	dp[0][0]=0;
	int n,m,t;cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<dp[n][m]<<"\n";
	}
	return 0;
}/*
	0	1	2	3	4	5	6
0	0	1	1	1	1	1	1
1	1	2	3	4	5	6	7	
2	1	3	6	10	15	21	28
3	1	4	10	20	35	56	84
4	1	5	15	35	70	126	210
5	1	6	21	36	106	232	442
6	1	7	28	64	170	402	844*/
