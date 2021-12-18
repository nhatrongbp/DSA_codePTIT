#include <bits/stdc++.h>
using namespace std;
int t,n,k;
long long dp[105][1005],m=1e9+7;
int main()
{
	memset(dp,0,sizeof(dp));
	for(int i=0;i<10;++i)dp[1][i]=1;
	for(int i=2;i<=100;++i){
		for(int j=1;j<=i*9;++j){
			for(int k=j;k>=j-9;--k){
				if(k>0)dp[i][j]=(dp[i][j]+dp[i-1][k])%m;
			}
		}
	}
	/*for(int i=0;i<=3;++i){
		for(int j=0;j<=29;++j)cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(k>n*9)cout<<"0\n";
		else cout<<dp[n][k]<<"\n";
	}
	return 0;
}
