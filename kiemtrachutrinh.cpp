#include <bits/stdc++.h>
using namespace std;
int t,v,e,truoc[1005];
vector<int> ke[1005];
bool visit[1005],res;
void init()
{
	res=false;
	memset(truoc,0,sizeof(truoc));
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
		if(!visit[ke[u][i]]&&truoc[u]!=ke[u][i]){
			res=true;
			return;
		}
		else if(visit[ke[u][i]]){
			truoc[ke[u][i]]=u;
			dfs(ke[u][i]);
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>v>>e;
		init();
		for(int i=1;i<=v;++i){
			memset(truoc,0,sizeof(truoc));
			memset(visit,true,sizeof(visit));
			dfs(i);
			if(res)break;
		}
		if(res)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

