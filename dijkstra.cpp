#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

vector< vector<pii> > a;
vector<int> cost;

void dijkstra(int s)
{
	priority_queue <pii, vector<pii>, greater<pii> > pq;
	pq.push({0,s});
	cost[s] = 0;
	while(!pq.empty()){
		pii p = pq.top(); pq.pop();
		int u = p.second, val = p.first;
		if(val > cost[u])continue;
		for(int j = 0; j < a[u].size(); ++j){
			int x = a[u][j].first;
			int tmp = a[u][j].second;
			if(cost[u] + tmp < cost[x]){
				cost[x] = cost[u] + tmp;
				pq.push({cost[x], x});
			}
		}
	}
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n, m, s;
		cin >> n >> m >> s;
		a.clear();
		a.resize(n + 5);
		cost.assign(n + 5, INT_MAX);
		for(int i = 0; i < m; ++i){
			int x, y, z;
			cin >> x >> y >> z;
			a[x].push_back({y, z});
			a[y].push_back({x, z});
		}
		dijkstra(s);
		for(int i = 1;i <= n; ++i)cout << cost[i] << ' ';
		cout << '\n';
	}
	return 0;
}


