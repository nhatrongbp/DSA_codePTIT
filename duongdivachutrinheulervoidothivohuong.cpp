#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool chuTrinh(int v)
{
	for(int i=1;i<=v;++i){
		if(ke[i].size()%2!=0)return false;
	}
	return true;
}
bool duongDi(int v)
{
	int dinhLe=0;
	for(int i=1;i<=v;++i){
		if(ke[i].size()%2!=0)dinhLe++;
	}
	return (dinhLe==2);
}
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int v,e;cin>>v>>e;
		for(int i=1;i<=v;++i)ke[i].clear();
		for(int i=0;i<e;++i){
			int a,b;cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		if(chuTrinh(v))cout<<2;
		else if(duongDi(v))cout<<1;
		else cout<<0;
		cout<<'\n';
	}
	return 0;
}


