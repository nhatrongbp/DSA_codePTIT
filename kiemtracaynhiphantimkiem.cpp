#include <bits/stdc++.h>
using namespace std;

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+5], res=1;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(i>0&&a[i]<=a[i-1])res=0;
		}
		cout<<res<<'\n';
	}
	return 0;
}
