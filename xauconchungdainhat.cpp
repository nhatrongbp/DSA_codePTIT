#include <bits/stdc++.h>
using namespace std;
int t,a[1005][1005];
string s1,s2;
int main()
{
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		for(int i=0;i<=s1.length();++i){
			for(int j=0;j<=s2.length();++j){
				if(i==0||j==0)a[i][j]=0;//day co do dai 0 thi xau con chung dai nhat bang 0
				else if(s1[i-1]==s2[j-1])a[i][j]=a[i-1][j-1]+1;//ky tu hien tai trung nhau = dap an khi khong tinh ky tu hien tai+1
				else a[i][j]=max(a[i-1][j],a[i][j-1]);//ky tu hien tai khac nhau = max(khong tinh ky tu i, khong tinh ky tu j)
			}
		}
		cout<<a[s1.length()][s2.length()]<<"\n";
	}
	return 0;
}/*
AGGTAB
GXTXAYB
	0	1	2	3	4	5	6
0	0	0	0	0	0	0	0
1	0	0	1	1	1	1	1
2	0	0	1	1	1	1	1
3	0	0	1	1	2	2	2
4	0	0	1	1	2	2	2
5	0	1	1	1	2	3	3
6	0	1	1	1	2	3	3
7	0	1	1	1	2	3	4
AA
BB
	0	1	2
0	0	0	0
1	0	0	0
2	0	0	0*/
