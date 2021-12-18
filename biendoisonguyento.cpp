#include <bits/stdc++.h>
using namespace std;
vector<int> ke[10005];
bool edge(int x,int y)
{
	int cnt=0;
	while(x&&y){
		if(x%10!=y%10)++cnt;
		x/=10;y/=10;
	}
	return (cnt==1);
}
int bfs(int u,int v)
{
	bool visit[10005];
	memset(visit,true,sizeof(visit));
	queue< pair<int,int> > q;
	q.push({u,0});
	visit[u]=false;
	while(!q.empty()){
		pair<int,int> temp=q.front();q.pop();
		if(temp.first==v)return temp.second;
		for(int i=0;i<ke[temp.first].size();++i){
			if(visit[ke[temp.first][i]]){
				visit[ke[temp.first][i]]=false;
				q.push({ke[temp.first][i],temp.second+1});
			}
		}
	}
}
int main()
{
	//erathos
	bool a[10005];
	memset(a,true,sizeof(a));
	for(int i=2;i<10000;++i){
		if(a[i]){
			for(int j=2*i;j<10000;j+=i)a[j]=false;
		}
	}
	vector<int> prime;
	for(int i=1000;i<10000;++i){
		if(a[i])prime.push_back(i);
	}
	//graph
	for(int i=0;i<prime.size();++i){
		for(int j=i+1;j<prime.size();++j){
			if(edge(prime[i],prime[j])){
				ke[prime[i]].push_back(prime[j]);
				ke[prime[j]].push_back(prime[i]);
			}
		}
	}
	int t;cin>>t;
	while(t--){
		int b,e;cin>>b>>e;
		cout<<bfs(b,e)<<"\n";
	}
	return 0;
}

