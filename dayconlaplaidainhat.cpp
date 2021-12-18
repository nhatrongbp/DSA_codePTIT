#include <bits/stdc++.h>
using namespace std;
short t,n,i,j,a[105][105];
string s;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>s;
		for(i=0;i<=n;++i){
			for(j=0;j<=n;++j){
				if(i==0||j==0)a[i][j]=0;//ko co ky tu nao thi do dai day lap lai=0
				else if(s[i-1]==s[j-1]&&i!=j)a[i][j]=a[i-1][j-1]+1;
				/*ky tu lap lai va vi tri ko trung nhau
				thi coi nhu day con lap lai dai them 1 don vi*/
				else a[i][j]=max(a[i-1][j],a[i][j-1]);//nguoc lai = max(ko lay ky tu i, ko lay ky tu j)
			}
		}
		cout<<a[i-1][j-1]<<"\n";
	}
	return 0;
}/*
index	char	string
1		a		axxxy
2		x		axxxy
3		x		axxxy
4		x		axxxy
5		y		axxxy
	0	1	2	3	4	5
0	0	0	0	0	0	0
1	0	0	0	0	0	0
2	0	0	0	1	2	2
3	0	0	1	1	2	2
4	0	0	1	2	2	2
5	0	0	1	2	2	2
*/
