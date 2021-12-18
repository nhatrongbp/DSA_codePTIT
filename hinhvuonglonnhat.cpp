#include <bits/stdc++.h>
using namespace std;
int t,n,m,res,a[505][505];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;res=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin>>a[i][j];
				if(i!=0&&j!=0&&a[i][j]){
					a[i][j]=min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]))+1;
				}
				res=max(res,a[i][j]);
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}/*
0 1 1 0 1		0 1 1 0 1
1 1 0 1 0		1 1 0 1 0
0 1 1 1 0		0 1 1 1 0
1 1 1 1 0		1 1 2 2 0
1 1 1 1 1		1 2 2 3 1
0 0 0 0 0		0 0 0 0 0*/
