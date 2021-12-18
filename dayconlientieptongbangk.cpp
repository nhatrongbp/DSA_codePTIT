#include <bits/stdc++.h>
using namespace std;
int t,n,a[100005];
long long k,s;
string slidingwindows()
{
	cin>>n>>k;
	for(int i=0;i<n;++i)cin>>a[i];
	int l=0;s=a[0];
	for(int i=1;i<=n;++i){
		while(s>k&&l<i-1)s-=a[l++];
		if(s==k)return "YES";
		if(i<n)s+=a[i];
	}
	return "NO";
}
int main()
{
	cin>>t;
	while(t--){
		cout<<slidingwindows()<<"\n";
	}
	return 0;
}
