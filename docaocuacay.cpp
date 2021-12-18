#include <bits/stdc++.h>
using namespace std;
vector<int> ke[100005];
int cnt[100005];
void dfs(int u)
{
	for(int i=0;i<ke[u].size();++i){
		cnt[ke[u][i]]=cnt[u]+1;
		dfs(ke[u][i]);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n+1;++i){
			ke[i].clear();
			cnt[i]=0;
		}
		for(int i=1;i<n;++i){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		cnt[1]=0;
		dfs(1);
		int res=cnt[1];
		for(int i=2;i<=n;++i)res=max(res,cnt[i]);
		cout<<res<<'\n';
	}
	return 0;
}
