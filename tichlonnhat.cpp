#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[10005];
	cin>>n;
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a,a+n);
	cout<<max(a[0]*a[1],max(a[n-1]*a[n-2],max(a[n-1]*a[n-2]*a[n-3],a[0]*a[1]*a[n-1])))<<"\n";
	return 0;
}

