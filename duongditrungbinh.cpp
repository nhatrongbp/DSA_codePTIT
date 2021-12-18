#include <bits/stdc++.h>
using namespace std;
int t,n,m;
vector<int> ke[105];
bool vis[105];

int bfs(int u,int v)
{
	queue< pair<int,int> > q;
	q.push({u,0});
	vis[u]=true;
	while(!q.empty()){
		pair<int,int> p = q.front(); q.pop();
		int f = p.first, s = p.second;
		if(f == v) return s;
		for(int i=0; i<ke[f].size(); i++){
			if(!vis[ke[f][i]]){
				vis[ke[f][i]] = true;
				q.push({ke[f][i], s+1});
			}
		}
	}
	return -1;
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++)ke[i].clear();
		for(int i=0;i<m;i++){
			int x,y;cin>>x>>y;
			ke[x].push_back(y);
			//ke[y].push_back(x);
		}
		int cnt=0, sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				memset(vis,false,sizeof(vis));
				int temp=bfs(i,j);
				if(temp!=-1){
					sum+=temp;
					++cnt;
				}
			}
		}
		cout<<setprecision(2)<<fixed<<1.0*sum/cnt<<'\n';
	}
	return 0;
}


