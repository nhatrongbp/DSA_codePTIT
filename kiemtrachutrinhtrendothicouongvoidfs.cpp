#include <bits/stdc++.h>
using namespace std;
int t,v,e,truoc[1005];
vector<int> ke[1005];
bool visit[1005],res;
void init()
{
	res=false;
	//memset(truoc,0,sizeof(truoc));
	memset(visit,true,sizeof(visit));
	for(int i=1;i<=v;++i)ke[i].clear();
	for(int i=0;i<e;++i){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		//ke[y].push_back(x);
	}
}
void dfs(int u)
{
	stack<int> st;
	st.push(u);
	visit[u]=false;
	while(!st.empty()){
		int t=st.top();st.pop();
		for(int i=0;i<ke[t].size();++i){
			if(visit[ke[t][i]]){
				visit[ke[t][i]]=false;
				st.push(t);st.push(ke[t][i]);
				break;
			}
			else if(ke[t][i]==u){
				res=true;
				return;
			}
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>v>>e;
		init();
		for(int i=1;i<=v;++i){
			//memset(truoc,0,sizeof(truoc));
			memset(visit,true,sizeof(visit));
			dfs(i);
			if(res)break;
		}
		if(res)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

