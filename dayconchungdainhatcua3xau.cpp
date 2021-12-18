#include <bits/stdc++.h>
using namespace std;
int dp[105][105][105];
int main()
{
	int t;cin>>t;
	while(t--){
		int na,nb,nc;
		string a,b,c;
		cin>>na>>nb>>nc>>a>>b>>c;
		a="0"+a;b="0"+b;c="0"+c;
		for(int i=0;i<=na;++i){
			for(int j=0;j<=nb;++j){
				for(int k=0;k<=nc;++k){
					if(i==0||j==0||k==0)dp[i][j][k]=0;
					else if(a[i]==b[j]&&b[j]==c[k])
						dp[i][j][k]=dp[i-1][j-1][k-1]+1;
					else dp[i][j][k]=max(dp[i-1][j][k],
									max(dp[i][j-1][k],dp[i][j][k-1]));
				}
			}
		}
		cout<<dp[na][nb][nc]<<"\n";
	}
	return 0;
}

