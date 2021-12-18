#include <bits/stdc++.h>
using namespace std;
int T,s,t;
bool visit[100005];
int bfs(int x, int y)
{
	if(s>=t)return s-t;
	memset(visit,true,sizeof(visit));
	queue < pair<int,int> > q;
	pair<int,int> p;
	p.first=x;p.second=0;
	visit[p.first]=false;
	q.push(p);
	while(!q.empty()){
		pair<int,int> temp=q.front();q.pop();
		if(temp.first==y)return temp.second;
		if(2*temp.first<=100005&&visit[2*temp.first]){
			p.first=2*temp.first;
			p.second=temp.second+1;
			visit[p.first]=false;
			q.push(p);
		}
		if(temp.first-1>=0&&visit[temp.first-1]){
			p.first=temp.first-1;
			p.second=temp.second+1;
			visit[p.first]=false;
			q.push(p);
		}
	}
}
int main()
{
	cin>>T;
	while(T--){
		cin>>s>>t;
		cout<<bfs(s,t)<<"\n";
	}
	return 0;
}


