#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
struct state{
	int x,y,cnt,s;
	//left:1 right:2 up:3 down:4
};
string a[505];
int n, m, xu, yu, xv, yv;
bool visit[505][505];

string bfs()
{
	memset(visit,false,sizeof(visit));
	queue<struct state> q;
	q.push({xu,yu,0,-1});
	visit[xu][yu]=true;
	while(!q.empty()){
		struct state temp = q.front();
		//cout << temp.x << ' ' << temp.y << ' ' << temp.cnt << ' '<< temp.s << endl;
		q.pop();
		if(temp.x == xv && temp.y == yv) {
			if(temp.cnt <=3 ) return "YES";
		}
		if(temp.cnt > 3) continue;
		//up:1
		if(temp.x - 1 >= 0 && !visit[temp.x - 1][temp.y] && a[temp.x - 1][temp.y] == '.'){
			visit[temp.x - 1][temp.y] = true;
			if(temp.s != 1)q.push({temp.x - 1, temp.y, temp.cnt + 1, 1});
			else q.push({temp.x - 1, temp.y, temp.cnt, 1});
		}
		//down:2
		if(temp.x + 1 < n && !visit[temp.x + 1][temp.y] && a[temp.x + 1][temp.y] == '.'){
			visit[temp.x + 1][temp.y] = true;
			if(temp.s != 2)q.push({temp.x + 1, temp.y, temp.cnt + 1, 2});
			else q.push({temp.x + 1, temp.y, temp.cnt, 2});
		}
		//left:3
		if(temp.y - 1 >= 0 && !visit[temp.x][temp.y - 1] && a[temp.x][temp.y - 1] == '.'){
			visit[temp.x][temp.y - 1] = true;
			if(temp.s != 3)q.push({temp.x, temp.y - 1, temp.cnt + 1, 3});
			else q.push({temp.x, temp.y - 1, temp.cnt, 3});
		}
		//right:4
		if(temp.y + 1 < n && !visit[temp.x][temp.y + 1] && a[temp.x][temp.y + 1] == '.'){
			visit[temp.x][temp.y + 1] = true;
			if(temp.s != 4)q.push({temp.x, temp.y + 1, temp.cnt + 1, 4});
			else q.push({temp.x, temp.y + 1, temp.cnt, 4});
		}
	}
	return "NO";
}

int main()
{
	int t;cin>>t;while(t--){
		cin >> n >> m;
			for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 'S')xu=i,yu=j,a[i][j]='.';
				if(a[i][j] == 'T')xv=i,yv=j,a[i][j]='.';
			}
		}
		//cout<<xu<<yu<<xv<<yv<<endl;
		cout << bfs() << '\n';
	}
	return 0;
}

