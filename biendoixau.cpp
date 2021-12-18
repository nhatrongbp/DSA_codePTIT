#include <bits/stdc++.h>
using namespace std;
int t,dp[105][105];
string a,b;
int main()
{
	cin>>t;
	while(t--){
		cin>>a>>b;a="0"+a;b="0"+b;
		for(int i=0;i<a.length();++i){
			for(int j=0;j<b.length();++j){
				if(i==0)dp[i][j]=j;//insert j times
				else if(j==0)dp[i][j]=i;//remove i times
				else if(a[i]==b[j])dp[i][j]=dp[i-1][j-1];//nothing to do
				else dp[i][j]=1+min(dp[i-1][j],//insert a digit likes b[j] 
								min(dp[i][j-1],//remove the digit a[i]
								dp[i-1][j-1]));//replace a[i] with b[j]
			}
		}
		cout<<dp[a.length()-1][b.length()-1]<<"\n";
	}
	return 0;
}

