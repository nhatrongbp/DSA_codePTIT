#include <bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+5];
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		//for(int i=0;i<n;++i)cout<<a[i]<<' ';
		if(n%2==0)cout<<a[n/2-1]<<'\n';
		else cout<<a[n/2]<<'\n';
	}
	return 0;
}


