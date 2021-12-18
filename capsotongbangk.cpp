#include <bits/stdc++.h>
using namespace std;
int t,r,i,j,n,k,a[105];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(i=0;i<n;++i)cin>>a[i];
		r=0;
		for(i=0;i<n;++i){
			for(int j=i+1;j<n;++j){
				if(a[i]+a[j]==k)++r;
			}
		}
		cout<<r<<"\n";
	}
	return 0;
}

