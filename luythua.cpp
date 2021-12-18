#include <bits/stdc++.h>
using namespace std;
int t,n,m=1e9+7;
long long k;
long long power(int a,long long b)
{
	if(b==0)return 1;
	long long x=power(a,b/2);
	if(b%2==0)return x*x%m;
	return a*(x*x%m)%m;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<power(n,k)<<"\n";
	}
	return 0;
}

