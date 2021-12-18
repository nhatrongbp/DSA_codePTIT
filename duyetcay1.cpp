#include <bits/stdc++.h>
using namespace std;
int preidx,in[1005],pre[1005];
int inidx(int l,int r,int key)
{
	for(int i=l;i<r;++i){
		if(in[i]==key)return i;
	}
	return r;
}
void post(int l,int r)
{
	if(l>r)return;
	int rootidx=inidx(l,r,pre[preidx++]);
	post(l,rootidx-1);
	post(rootidx+1,r);
	cout<<in[rootidx]<<' ';
}
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		preidx=0;
		int n;cin>>n;
		for(int i=0;i<n;++i)cin>>in[i];
		for(int i=0;i<n;++i)cin>>pre[i];
		post(0,n-1);
		cout<<'\n';
	}
	return 0;
}


