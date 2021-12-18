/*#include <bits/stdc++.h>
using namespace std;
//di 1 buoc
int t,r,a,m;
void Try(int x, int y)
{
	if(x==r-1&&y==m-1)++a;
	if(x+1<r)Try(x+1,y);
	if(y+1<m)Try(x,y+1);
}
int main()
{
	cin>>t;
	while(t--){
		cin>>r>>m;
		for(int i=0;i<r*m;++i)cin>>a;
		a=0;
		Try(0,0);
		cout<<a<<"\n";
	}
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
//di a[i][j] buoc
struct state{
	int x, y, z;
	state(int xx, int yy, int zz){
		x=xx;y=yy;z=zz;
	}
};
int t, r, c, a[1005][1005];
bool visit[1005][1005];
int bfs()
{
	struct state s = state(1, 1, 0);
	queue<struct state> q;
	q.push(s);
	while(!q.empty()){
		struct state temp = q.front(); q.pop();
		int i = temp.x, j = temp.y, k = temp.z;
		if(i == r && j == c) return k;
		if(i + a[i][j] <= r && !visit[i+a[i][j]][j]) {
			visit[i+a[i][j]][j] = true;
			struct state st = state(i+a[i][j], j, k+1);
			q.push(st);
		}
		if(j + a[i][j] <= c && !visit[i][j+a[i][j]]) {
			visit[i][j+a[i][j]] = false;
			struct state st = state(i, j+a[i][j], k+1);
			q.push(st);
		}
	}
	return -1;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>r>>c;
		for(int i=1;i<=r;++i){
			for(int j=1;j<=c;j++){
				cin>>a[i][j];
				visit[i][j]=false;
			}
		}
		cout<<bfs()<<endl;
	}
	return 0;
}


