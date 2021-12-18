#include <bits/stdc++.h>
using namespace std;
int t,n,k,m=1e9+7;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		priority_queue<int> p;
		for(int i=0;i<n;++i){
			cin>>k;
			p.push(k);
		}
		k=0;
		for(int i=n-1;i>=0;--i){
			k=(k+i*p.top()%m)%m;
			p.pop();
		}
		cout<<k%m<<"\n";
	}
	return 0;
}

