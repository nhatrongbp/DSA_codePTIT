#include <bits/stdc++.h>
using namespace std;
struct point {
	int x,y,z;
};
bool visit[9][9];
int bfs(struct point u, struct point v)
{
	memset(visit,true,sizeof(visit));
	queue <struct point> q;
	q.push(u);
	visit[u.x][u.y]=false;
	while(!q.empty()){
		struct point t=q.front();q.pop();
		if(t.x==v.x&&t.y==v.y)return t.z;
		if(t.x+2<=8&&t.y+1<=8&&visit[t.x+2][t.y+1]){
			u.x=t.x+2;u.y=t.y+1;u.z=t.z+1;
			visit[t.x+2][t.y+1]=false;
			q.push(u);
		}
		if(t.x+1<=8&&t.y+2<=8&&visit[t.x+1][t.y+2]){
			u.x=t.x+1;u.y=t.y+2;u.z=t.z+1;
			visit[t.x+1][t.y+2]=false;
			q.push(u);
		}
		if(t.x-1>=1&&t.y+2<=8&&visit[t.x-1][t.y+2]){
			u.x=t.x-1;u.y=t.y+2;u.z=t.z+1;
			visit[t.x-1][t.y+2]=false;
			q.push(u);
		}
		if(t.x-2>=1&&t.y+1<=8&&visit[t.x-2][t.y+1]){
			u.x=t.x-2;u.y=t.y+1;u.z=t.z+1;
			visit[t.x-2][t.y+1]=false;
			q.push(u);
		}
		if(t.x-2>=1&&t.y-1>=1&&visit[t.x-2][t.y-1]){
			u.x=t.x-2;u.y=t.y-1;u.z=t.z+1;
			visit[t.x-2][t.y-1]=false;
			q.push(u);
		}
		if(t.x-1>=1&&t.y-2>=1&&visit[t.x-1][t.y-2]){
			u.x=t.x-1;u.y=t.y-2;u.z=t.z+1;
			visit[t.x-1][t.y-2]=false;
			q.push(u);
		}
		if(t.x+1<=8&&t.y-2>=1&&visit[t.x+1][t.y-2]){
			u.x=t.x+1;u.y=t.y-2;u.z=t.z+1;
			visit[t.x+1][t.y-2]=false;
			q.push(u);
		}
		if(t.x+2<=8&&t.y-1>=1&&visit[t.x+2][t.y-1]){
			u.x=t.x+2;u.y=t.y-1;u.z=t.z+1;
			visit[t.x+2][t.y-1]=false;
			q.push(u);
		}
	}
}
int main()
{
	string a,b;
	int t;cin>>t;
	while(t--){
		cin>>a>>b;
		struct point st,en;
		st.x=a[1]-'0';st.y=a[0]-'a'+1;st.z=0;
		en.x=b[1]-'0';en.y=b[0]-'a'+1;
		cout<<bfs(st,en)<<"\n";
	}
	return 0;
}

