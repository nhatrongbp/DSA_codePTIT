#include <bits/stdc++.h>
using namespace std;
int t,n,m,u;
vector<int> ke[1005];
bool visit[1005];

void bfs()
{
	vector<int> v;
	queue<int> s;
	s.push(u);
	visit[u]=false;
	while(!s.empty()){
		int temp=s.front();s.pop();
		for(int i=0;i<ke[temp].size();++i){
			if(visit[ke[temp][i]]){
				visit[ke[temp][i]]=false;
				v.push_back(temp);
				s.push(ke[temp][i]);
				v.push_back(ke[temp][i]);
			}
		}
	}
	if((n-1)*2==v.size()){
		for(int i=0;i<v.size();i+=2){
			cout<<v[i]<<' '<<v[i+1]<<'\n';
		}
	}
	else cout<<"-1\n";
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m>>u;
		for(int i=1;i<=n;++i){
			visit[i]=true;
			ke[i].clear();
		}
		for(int i=0;i<m;++i){
			int a,b;cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		bfs();
	}
	return 0;
}


