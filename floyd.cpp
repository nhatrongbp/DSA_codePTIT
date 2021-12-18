#include <bits/stdc++.h>
using namespace std;
vector< vector<long long> > d;
int main()
{
	int n,m;
	cin>>n>>m;
	d.assign(n+5,vector<long long>(n+5,INT_MAX));
	for(int i=1;i<=n;++i)d[i][i]=0;
	for(int i=0;i<m;++i){
		int x,y,z;
		cin>>x>>y>>z;
		d[x][y]=z;
		d[y][x]=z;
	}
	for(int k=1;k<=n;++k){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	int q;cin>>q;
	while(q--){
		int x,y;cin>>x>>y;
		cout<<d[x][y]<<'\n';
	}
	return 0;
}

