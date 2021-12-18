#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int dp[n+5];
		pair<int,int> p[n+5];
		for(int i=0;i<n;++i){
			cin>>p[i].first>>p[i].second;
			dp[i]=1;
		}
		sort(p,p+n);
		int res=1;
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(p[i].first>p[j].second){
					dp[i]=max(dp[i],dp[j]+1);
				}
				res=max(res,dp[i]);
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}/*
index	0	1	2	3	4
first	5	39	15	27	50
second	24	60	28	40	90
result	1	2	1	2	3*/
