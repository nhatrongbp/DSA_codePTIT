#include <bits/stdc++.h>
using namespace std;
int t,v,e;
vector<int> ke[105];
bool visit[105];
bool res;
void Try(int id, int sum)
{
	if(res)return;
	if(sum==v){
		res=true;
		return;
	}
	for(int i=0;i<ke[id].size();i++){
		if(!visit[ke[id][i]]){
			visit[ke[id][i]]=true;
			Try(ke[id][i],sum+1);
			visit[ke[id][i]]=false;
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=1;i<=v;i++)ke[i].clear();
		for(int i=0;i<e;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		memset(visit,false,sizeof(visit));
		res=false;
		for(int i=1;i<=e;i++){
			if(res)break;
			memset(visit,false,sizeof(visit));
			visit[i]=true;
			Try(i,1);
		}
		cout<<(res?1:0)<<'\n';
	}
	return 0;
}


