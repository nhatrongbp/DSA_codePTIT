#include <bits/stdc++.h>
using namespace std;
int t,n;
string s;
bool dp[1005][1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>s;n=s.length();
		int res=1;
		for(int i=0;i<n-1;++i){
			dp[i][i]=true;
			if(s[i]==s[i+1]){
				dp[i][i+1]=true;
				res=2;
			}
			else dp[i][i+1]=false;
		}
		dp[n-1][n-1]=true;
		for(int k=3;k<=n;++k){
			for(int i=0;i<=n-k;++i){
				int j=i+k-1;
				if(s[i]==s[j]&&dp[i+1][j-1]){
					res=k;
					dp[i][j]=true;
				}
				else dp[i][j]=false;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}/*
b1: xu ly cac xau do dai 1 va 2
b2: xu ly cac xau do dai tu 3 den n
neu s[i]==s[j] && dp[i+1][j-1] la xau doi xung
thi dp[i][j] la xau doi xung
VD:
	0	1	2	3	4	5	6
	a	b	c	b	a	d	d
dp[i][j]:xau con co doi xung tu i den j hay khong
xu ly cac xau do dai 1 va 2
	0	1	2	3	4	5	6
0	1	0	
1		1	0
2			1	0
3				1	0
4					1	0
5						1	1
6							1

xu ly cac xau do dai 3
	0	1	2	3	4	5	6
0	1	0	0
1		1	0	1
2			1	0	0
3				1	0	0
4					1	0	0
5						1	1
6							1

xu ly cac xau do dai 4
	0	1	2	3	4	5	6
0	1	0	0	0
1		1	0	1	0	
2			1	0	0	0
3				1	0	0	0
4					1	0	0
5						1	1
6							1

xu ly cac xau do dai 5
	0	1	2	3	4	5	6
0	1	0	0	0	1
1		1	0	1	0	0
2			1	0	0	0	0
3				1	0	0	0
4					1	0	0
5						1	1
6							1

xu ly cac xau do dai 6
	0	1	2	3	4	5	6
0	1	0	0	0	1 	0
1		1	0	1	0	0	0
2			1	0	0	0	0
3				1	0	0	0
4					1	0	0
5						1	1
6							1

xu ly cac xau do dai 7
	0	1	2	3	4	5	6
0	1	0	0	0	1 	0	0
1		1	0	1	0	0	0
2			1	0	0	0	0
3				1	0	0	0
4					1	0	0
5						1	1
6							1
*/
