#include <bits/stdc++.h>
using namespace std;
int t,n,k,s,a;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;s=0;
		priority_queue<int> p;
		for(int i=0;i<n;++i){
			cin>>a;s+=a;
			p.push(a);
		}
		if(k<=n/2)k=n-k;a=0;
		while(k--){
			a+=p.top();
			p.pop();
		}
		cout<<2*a-s<<"\n";
	}
	return 0;
}

