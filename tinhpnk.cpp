#include <bits/stdc++.h>
using namespace std;
//p(n,k-1)	=n*(n-1)...(n-k+2)
//p(n,k)	=n*(n-1)...(n-k+2)*(n-k+1)		=p(n,k-1)*(n-k+1)
//p(n,k+1)	=n*(n-1)...(n-k+2)*(n-k+1)*(n-k)=p(n,k)*(n-k)
int m=1e9+7;
int t,n,k;
long long dp[1005][1005];
int main()
{
	for(int i=1;i<=1000;++i){
		for(int j=1;j<=i;++j){
			if(j==1)dp[i][j]=i;
			else dp[i][j]=dp[i][j-1]*(i-j+1)%m;
		}
	}
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(n<k)cout<<"0\n";
		else if(k==0)cout<<"1\n";
		else cout<<dp[n][k]<<"\n";
	}
	return 0;
}/*
n\k	1	2	3	4	5
1	1	0	0	0	0
2	2	2	0	0	0
3	3	6	6	0	0
4	4	12	24	24	0
5	5	20	60	120	120
p(3,2)=p(3,1)*(3-2+1)=3*2=6
p(3,3)=p(3,2)*(3-3+1)=6*1=6
*/
