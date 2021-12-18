#include <bits/stdc++.h>
using namespace std;
int t,n,m;
vector<int> res,ke[1005];
bool vis[1005],found;

void dfs(int u, int v)
{
	if(found)return;
	for(int i=0;i<ke[v].size();i++){
		if(u!=1&&ke[v][i]==1){
			for(int j=0;j<res.size();j++){
				cout<<res[j]<<' ';
			}
			found=true;
			return;
		}
		if(!vis[ke[v][i]]){
			vis[ke[v][i]]=true;
			res.push_back(ke[v][i]);
			dfs(v,ke[v][i]);
			res.pop_back();
		}
	}
}

int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;
		res.clear();res.push_back(1);
		memset(vis,false,sizeof(vis));
		for(int i=1;i<=n;i++)ke[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		vis[1]=true;
		found=false;
		dfs(0,1);
		if(found)cout<<"1\n";
		else cout<<"NO\n";
	}
	return 0;
}


