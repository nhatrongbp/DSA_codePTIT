#include <bits/stdc++.h>
using namespace std;
int t,n,m,res;
short visit[505][505];
void dfs(int x, int y)
{
	visit[x][y]=0;
	if(x-1>=0&&y-1>=0&&visit[x-1][y-1])dfs(x-1,y-1);
	if(x-1>=0&&visit[x-1][y])dfs(x-1,y);
	if(x-1>=0&&y+1<m&&visit[x-1][y+1])dfs(x-1,y+1);
	if(y-1>=0&&visit[x][y-1])dfs(x,y-1);
	if(y+1<m&&visit[x][y+1])dfs(x,y+1);
	if(x+1<n&&y-1>=0&&visit[x+1][y-1])dfs(x+1,y-1);
	if(x+1<n&&visit[x+1][y])dfs(x+1,y);
	if(x+1<n&&y+1<m&&visit[x+1][y+1])dfs(x+1,y+1);
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;res=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j)cin>>visit[i][j];
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(visit[i][j]){
					++res;
					dfs(i,j);
				}
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

