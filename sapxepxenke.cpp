#include <bits/stdc++.h>
using namespace std;
int t,n,a[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];sort(a,a+n);
		for(int i=0;i<n/2;++i)cout<<a[n-1-i]<<' '<<a[i]<<' ';
		if(n%2==1)cout<<a[n/2];
		cout<<"\n";
	}
	return 0;
}

