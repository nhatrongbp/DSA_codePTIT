#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
vector < vector<int> > path;
int back[1005];

void road(int node)
{
	path[path.size()-1].push_back(node);
	if(back[node]==1)path[path.size()-1].push_back(1);
	else road(back[node]);
}

void dfs(int u)
{
	//leaf node
	if(ke[u].size()==0){
		path.resize(path.size()+1);
		road(u);
		return;
	}
	for(int i=0;i<ke[u].size();++i){
		back[ke[u][i]]=u;
		dfs(ke[u][i]);
	}
}

bool pathcmp(vector<int> a, vector<int> b)
{
	return a[0]<b[0];
}

int main()
{
	int t;cin>>t;
	while(t--){
		path.clear();
		int n;cin>>n;
		for(int i=1;i<=n+1;++i)ke[i].clear();
		for(int i=1;i<n;++i){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		dfs(1);
		sort(path.begin(),path.end(),pathcmp);
		for(int i=0;i<path.size();++i){
			for(int j=path[i].size()-1;j>=0;--j){
				cout<<path[i][j]<<' ';
			}
			cout<<'\n';
		}
	}
	return 0;
}
