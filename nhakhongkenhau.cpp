#include <bits/stdc++.h>
using namespace std;
int t,n,a[1000005],f[1000005];
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];
		f[0]=a[0];
		f[1]=max(a[0],a[1]);
		f[2]=max(a[0]+a[2],a[1]);
		for(int i=3;i<n;++i){
			f[i]=max(max(a[i]+f[i-2],a[i]+f[i-3]),f[i-1]);
		}
		cout<<f[n-1]<<'\n';
	}
	return 0;
}


