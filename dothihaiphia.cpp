#include <bits/stdc++.h>
using namespace std;
int t,n,m,s[1005];
vector<int> ke[1005];
bool check()
{
	memset(s,0,sizeof(s));
	queue< pair<int,int> > q;
	for(int i=1;i<=n;i++){
		if(s[i]==0){
			q.push({i,1});
			s[i]=1;
			while(!q.empty()){
				pair<int,int> p = q.front();
				q.pop();
				int v=p.first;
				int c=p.second;
				for(int j=0;j<ke[v].size();j++){
					if(s[ke[v][j]]==c)return false;
					if(s[ke[v][j]]==0){
						if(c==1)s[ke[v][j]]=2;
						else s[ke[v][j]]=1;
						q.push({ke[v][j],s[ke[v][j]]});
					}
				}
			}
		}
	}
	return true;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++)ke[i].clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			if(x<y)ke[x].push_back(y);
			else ke[y].push_back(x);
		}
		for(int i=1;i<=n;i++)sort(ke[i].begin(),ke[i].end());
		cout<<(check()?"YES":"NO")<<'\n';
	}
	return 0;
}
