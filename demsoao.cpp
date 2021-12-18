#include <bits/stdc++.h>
using namespace std;
int t,n,m,res;
short visit[105][105];
string a[105];
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
	t=1;
	while(t--){
		cin>>n>>m;res=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(a[i][j]=='W')visit[i][j]=1;
				else visit[i][j]=0;
			}
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

