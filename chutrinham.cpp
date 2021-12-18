#include <bits/stdc++.h>
using namespace std;
#define ll long long

int t,n,m;
vector<ll> dis;
vector< pair< pair<ll,ll>, ll> > edge;

bool bellman(int s)
{
	dis.assign(n+5,LLONG_MAX);
	dis[s]=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<edge.size();++j){
			ll u=edge[j].first.first, v=edge[j].first.second;
			ll cost=edge[j].second;
			if(dis[u]!=LLONG_MAX&&dis[u]+cost<dis[v]){
				dis[v]=dis[u]+cost;
			}
		}
	}
	for(int j=0;j<edge.size();++j){
		ll u=edge[j].first.first, v=edge[j].first.second;
		ll cost=edge[j].second;
		if(dis[u]!=LLONG_MAX&&dis[u]+cost<dis[v]){
			return true;
		}
	}
	return false;
}

int negativeCycle()
{
	for(int i=1;i<=n;++i){
		if(bellman(i))return 1;
	}
	return 0;
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		edge.clear();dis.clear();
		cin>>n>>m;
		for(int i=0;i<m;++i){
			ll u,v,cost;
			cin>>u>>v>>cost;
			edge.push_back({{u,v},cost});
		}
		cout<<negativeCycle()<<'\n';
	}
	return 0;
}


