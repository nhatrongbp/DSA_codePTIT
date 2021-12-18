#include <bits/stdc++.h>
using namespace std;
int t,n,s,a[35];
vector<int> res;
void Try(int idx, int sum, int siz)
{
	if(res.size()>0)return;
	if(sum==s){
		res.push_back(siz);
		return;
	}
	for(int i=idx;i<n;++i){
		if(sum+a[i]*(n-i)<s)break;
		if(sum+a[i]<=s){
			Try(i+1,sum+a[i],siz+1);
		}
	}
}
int main()
{
	//cin>>t;
	t=1;
	while(t--){
		cin>>n>>s;
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n,greater<int>());
		res.clear();
		Try(0,0,0);
		if(res.size()==0){
			cout<<"-1\n";
			continue;
		}
		//for(int i=0;i<res.size();++i)cout<<res[i]<<' ';cout<<endl;
		cout<<res[0]<<"\n";
	}
	return 0;
}

