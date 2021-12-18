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
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visit[u]=false;
	while(!q.empty()){
		int temp=q.front();q.pop();
		for(int i=0;i<ke[temp].size();++i){
			if(visit[ke[temp][i]]){
				visit[ke[temp][i]]=false;
				q.push(ke[temp][i]);
			}
		}
	}
}
int tplt()
{
	int res=0;
	for(int i=1;i<=v;++i){
		if(visit[i]){
			++res;
			bfs(i);
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
		cout<<tplt()<<"\n";
	}
	return 0;
}

