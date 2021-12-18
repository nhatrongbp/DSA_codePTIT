#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,dp[105][15],m=1e9+7;
	for(int i=0;i<=100;++i){
		for(int j=0;j<10;++j){
			if(i==0||j==0)dp[i][j]=1;
			else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%m;
		}
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n][9]<<"\n";
	}
	return 0;
}/*
	0	1	2	3	4	5	6	7	8	9	dc phep dung den chu so thu j
0	1	1	1	1	1	1	1	1	1	1	
1	1	2	3	4	5	6	7	8	9	10
2	1	3	6	10	15	21	28	36	45	55	
3	1	4	10	20	35	56	84	120	165	220
4	1

...
100
so chu so
dp[i][j]=dp[i-1][j]+dp[i][j-1]
=chon chu so j + khong chon chu so j
chon chu so j thi i-1 de chua 1 slot cuoi cho chu so i
ko chon chu so j thi j-1
*/
