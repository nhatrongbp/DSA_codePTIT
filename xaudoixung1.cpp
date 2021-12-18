#include <bits/stdc++.h>
using namespace std;
int t,n,dp[45][45];
string s;
int main()
{
	cin>>t;
	while(t--){
		cin>>s;n=s.length();
		memset(dp,0,sizeof(dp));
		//xau con tu i den i (do dai 1 ky tu) thi ton 0 phep insert
		//duyet tat ca xau con co do dai tu 2 den n
		for(int len=1;len<n;++len){
			//xau con tu i den j co do dai = len+1
			for(int i=0,j=len;j<n;++i,++j){
				//si=sj thi bo qua ky tu i va j, so phep insert=dp[i+1][j-1]
				if(s[i]==s[j])dp[i][j]=dp[i+1][j-1];
				//si!=sj thi = min(insert i vao j, insert j vao i) + 1
				else dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
			}
		}
		cout<<dp[0][n-1]<<"\n";
	}
	return 0;
}

