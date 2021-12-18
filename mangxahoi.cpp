#include <bits/stdc++.h>
using namespace std;
int t,n,m;
vector<int> ke[100005];
bool check()
{
	bool res=true;
	for(int a=1;a<=n;a++){
		if(ke[a].size()==0)continue;
		for(int b=0;b<ke[a].size();b++){
			for(int c=0;c<ke[b].size();c++){
				if(ke[b][c]==a)continue;
				bool possible=false;
				for(int d=0;d<ke[c].size();d++){
					if(ke[c][d]==ke[a][b])continue;
					if(ke[c][d]==a){
						possible=true;
						break;
					}
				}
				if(!possible){
					res=false;
					break;
				}
			}
		}
		if(!res)break;
	}
	return res;
}
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++)ke[i].clear();
		for(int i=0;i<m;i++){
			int u,v;cin>>u>>v;
			if(u==v)continue;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		cout<<(check()?"YES":"NO")<<'\n';
	}
	return 0;
}


