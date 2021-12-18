#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
#define pb push_back
#define ll long long

int n, m;
vector< vector<int> > cost, A; 
vector<pii> E = {{-1,0},{1,0},{0,-1},{0,1}};

int dijkstra(){
    priority_queue< pair<int, pii>, vector< pair<int, pii> >, greater< pair<int, pii> > > pq;
    pq.push({A[1][1], {1, 1}});
    while(!pq.empty()){
        auto p = pq.top(); pq.pop();
        int w = p.f;
        pii v = p.s;
        int x = v.f, y = v.s;
        if(x == n && y == m) return w;
        if(w > cost[x][y]) continue;
        for(auto e: E){
            if(A[x+e.f][y+e.s] == -1) continue;
            if(w + A[x+e.f][y+e.s] < cost[x+e.f][y+e.s]){
                cost[x+e.f][y+e.s] = w + A[x+e.f][y+e.s];
                pq.push({cost[x+e.f][y+e.s], {x+e.f, y+e.s}});
            }
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        cost.assign(n+5, vector<int>(m+5, INT_MAX));
        A.assign(n+5, vector<int>(m+5, -1));
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j) cin >> A[i][j];
        }
        cout << dijkstra() << '\n';
    }
    return 0;
}