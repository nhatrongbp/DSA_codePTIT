#include <bits/stdc++.h>
using namespace std;
int t,n,a[25];
long long x,y;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		x=0;y=0;
		for(int i=0;i<n;i+=2){
			x=x*10+a[i];
			if(i+1<n)y=y*10+a[i+1];
		}
		cout<<x+y<<"\n";
	}
	return 0;
}

