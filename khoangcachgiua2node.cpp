#include <bits/stdc++.h>
using namespace std;
vector<int> ke[100005];
bool visit[100005];
int cnt[100005];
void dfs(int u,int v)
{
	for(int i=0;i<ke[u].size();++i){
		if(visit[ke[u][i]]){
			visit[ke[u][i]]=false;
			cnt[ke[u][i]]=cnt[u]+1;
			if(ke[u][i]==v)return;
			dfs(ke[u][i],v);
		}
	}
}
int main()
{
	int t;t=1;
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n+1;++i){
			ke[i].clear();
			visit[i]=true;
		}
		for(int i=1;i<n;++i){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		int q;cin>>q;
		for(int i=0;i<q;++i){
			memset(visit,true,sizeof(visit));
			memset(cnt,0,sizeof(cnt));
			int u,v;
			cin>>u>>v;
			visit[u]=false;cnt[u]=0;
			dfs(u,v);
			cout<<cnt[v]<<'\n';
		}
	}
	return 0;
}


