#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string n;
		cin>>n;
		long long dp[n.length()];
		dp[0]=n[0]-'0';
		long long res=dp[0];
		for(int i=1;i<n.length();++i){
			dp[i]=(i+1)*(n[i]-'0')+10*dp[i-1];
			res+=dp[i];
		}
		cout<<res<<"\n";
	}
	return 0;
}/*
"1234"
dp[0] = 1
dp[1] = 2 + 12
dp[2] = 3 + 23 + 123
dp[3] = 4 + 34 + 234 + 1234
	  = 4 + 30+4 + 230+4 + 1230+4
	  = 4*4 + 10*(3+23+123)
dp[i] = (i+1)*n[i] + 10*dp[i-1]
*/
