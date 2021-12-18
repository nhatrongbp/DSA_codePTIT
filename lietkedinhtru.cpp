#include <bits/stdc++.h>
using namespace std;
int t,v,e;
vector<int> ke[1005];
bool visit[1005];
void init()
{
	memset(visit,true,sizeof(visit));
	for(int i=1;i<=v;++i)ke[i].clear();
	for(int i=0;i<e;++i){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void dfs(int u)
{
	visit[u]=false;
	for(int i=0;i<ke[u].size();++i){
		if(visit[ke[u][i]]){
			dfs(ke[u][i]);
		}
	}
}
int tplt()
{
	int res=0;
	for(int i=1;i<=v;++i){
		if(visit[i]){
			++res;
			dfs(i);
		}
	}
	return res;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>v>>e;
		init();
		int tplt_ban_dau=tplt();
		for(int i=1;i<=v;++i){
			memset(visit,true,sizeof(visit));
			visit[i]=false;
			if(tplt()>tplt_ban_dau)cout<<i<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

