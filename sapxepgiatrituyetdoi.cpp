#include <bits/stdc++.h>
using namespace std;
int t,n,x,a[100005];
bool abscmp(int u,int v)
{
	return abs(u-x)<abs(v-x);
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;++i)cin>>a[i];stable_sort(a,a+n,abscmp);
		for(int i=0;i<n;++i)cout<<a[i]<<' ';
		cout<<"\n";
	}
	return 0;
}

