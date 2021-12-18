#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n][m];
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin>>a[i][j];
				if(i==0&&j>0)a[i][j]+=a[i][j-1];
				if(j==0&&i>0)a[i][j]+=a[i-1][j];
				if(i>0&&j>0)a[i][j]+=min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]));
			}
		}
		cout<<a[n-1][m-1]<<"\n";
	}
	return 0;
}/*
	1	2	3
	4	8	2
	1	5	3

	1	2	3
1	1	3	6
2	5	9	5
3	6	10	8*/
