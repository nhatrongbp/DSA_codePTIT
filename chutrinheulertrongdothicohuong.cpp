#include <bits/stdc++.h>
using namespace std;
int banBacRa[1005];
int banBacVao[1005];
bool chuTrinh(int v)
{
	for(int i=1;i<=v;++i){
		if(banBacRa[i]!=banBacVao[i])return false;
	}
	return true;
}
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int v,e;cin>>v>>e;
		for(int i=1;i<=v;++i){
			banBacRa[i]=0;
			banBacVao[i]=0;
		}
		for(int i=0;i<e;++i){
			int a,b;cin>>a>>b;
			banBacRa[a]++;
			banBacVao[b]++;
		}
		if(chuTrinh(v))cout<<1;
		else cout<<0;
		cout<<'\n';
	}
	return 0;
}


