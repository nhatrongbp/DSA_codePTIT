#include <bits/stdc++.h>
using namespace std;
int t,v,e,m,color[15];
vector<int> ke[15];
bool check()
{
	for(int i=1;i<=v;i++){
		for(int j=0;j<ke[i].size();j++){
			if(color[i]==color[ke[i][j]])return false;
		}
	}
	return true;
}
bool Try(int id)
{
	if(id==v+1)return check();
	for(int i=1;i<=m;i++){
		color[id]=i;
		if(Try(id+1))return true;
	}
	return false;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>v>>e>>m;
		for(int i=1;i<=v;i++)ke[i].clear();
		for(int i=0;i<e;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		if(Try(1))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}


