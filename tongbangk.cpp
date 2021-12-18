#include <bits/stdc++.h>
using namespace std;
int m=1e9+7;
int t,n,k,dp[1000005],a[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;++i)cin>>a[i];
		dp[0]=1;//sort(a,a+n);
		for(int i=1;i<=k;++i){//ktra tu tong=1 den tong=k
			dp[i]=0;
			for(int j=0;j<n;++j){//ktra phan tu a[j] co tham gia vao tong=i duoc ko
				if(a[j]<=i)dp[i]=(dp[i]+dp[i-a[j]])%m;
			}
		}
		cout<<dp[k]<<"\n";
	}
	return 0;
}
/*
arr={1,5,6} sum=7
	0	1	2	3	4	5	6	7
	1	1	1	1	1	2	4	6
									
arr={12,3,1,9} sum=14
	0	1	2	3	4	5	6	7	8	9 	10	11	12	13	14
	1	1	1	2	3	4	6	9	13	20	30	44	67	101	150
*/
