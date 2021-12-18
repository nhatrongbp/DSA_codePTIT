#include <bits/stdc++.h>
using namespace std;
int v,ne;
struct edge{
	int x,y,z;
};
struct edge e[10005];
int parent[10005];

bool krucmp(struct edge a, struct edge b)
{
	if(a.z!=b.z)return a.z<b.z;
	if(a.x!=b.x)return a.x<b.x;
	return a.y<b.y;
}

int Find(int u)
{
	if(parent[u]==-1)return u;
	return Find(parent[u]);
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		cin>>v>>ne;
		for(int i=0;i<ne;++i){
			cin>>e[i].x>>e[i].y>>e[i].z;
			parent[e[i].x]=-1;
			parent[e[i].y]=-1;
		}
		sort(e,e+ne,krucmp);
		int res=0;
		for(int i=0;i<ne;++i){
			int x=Find(e[i].x);
			int y=Find(e[i].y);
			if(x!=y){
				parent[x]=y;
				res+=e[i].z;
			}
		}
		cout<<res<<'\n';
	}
	return 0;
}


