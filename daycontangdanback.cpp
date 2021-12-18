#include <bits/stdc++.h>
using namespace std;
bool incr(int a[],int b[],int k)
{
	for(int i=1;i<k;++i){
		if(a[b[i]]>=a[b[i+1]])return false;
	}
	return true;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+5],b[n+5];
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=k;++i)b[i]=i;
	int res=0;
	if(incr(a,b,k))++res;
	while(true){
		int i;
		for(i=k;i>=1;--i){
			if(b[i]<n-k+i){
				++b[i];
				for(int j=i+1;j<=k;++j)b[j]=b[j-1]+1;
				break;
			}
		}
		if(i==0)break;
		if(incr(a,b,k))++res;
	}
	cout<<res;
	return 0;
}

