#include <bits/stdc++.h>
using namespace std;
struct state{
	int x,y,cnt;
};
string a[105];
int n, xu, yu, xv, yv;
bool visit[105][105];

int bfs()
{
	memset(visit,false,sizeof(visit));
	queue<struct state> q;
	q.push({xu,yu,0});
	visit[xu][yu]=true;
	while(!q.empty()){
		struct state temp = q.front();
		q.pop();
		int x = temp.x, y = temp.y, cnt = temp.cnt;
		//cout << x << ' ' << y << ' ' << cnt << endl;
		if(x == xv && y == yv) {
			return temp.cnt;
		}
		for(int i = y + 1; i < n; i++){
			if(!visit[x][i]&&a[x][i]=='.'){
				visit[x][i] = true;
				q.push({x,i,cnt+1});
			}
			else break;
		}
		for(int i = y - 1; i >= 0; i--){
			if(!visit[x][i]&&a[x][i]=='.'){
				visit[x][i] = true;
				q.push({x,i,cnt+1});
			}
			else break;
		}
		for(int i = x + 1; i < n; i++){
			if(!visit[i][y]&&a[i][y]=='.'){
				visit[i][y] = true;
				q.push({i,y,cnt+1});
			}
			else break;
		}
		for(int i = x - 1; i >= 0; i--){
			if(!visit[i][y]&&a[i][y]=='.'){
				visit[i][y] = true;
				q.push({i,y,cnt+1});
			}
			else break;
		}
	}
}

int main()
{
	int t;cin>>t;while(t--){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> xu >> yu >> xv >> yv;
	//cout<<xu<<yu<<xv<<yv<<endl;
	cout << bfs() << '\n';
}
	return 0;
}


