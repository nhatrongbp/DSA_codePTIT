#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;cin>>n;
	bool a[100005];
	memset(a,true,sizeof(a));
	for(int i=0;i<n;++i){
		cin>>t;
		if(a[t]){
			a[t]=false;
			cout<<t<<' ';
		}
	}
	return 0;
}

