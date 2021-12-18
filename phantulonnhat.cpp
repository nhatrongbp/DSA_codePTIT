#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		priority_queue<int> p;
		for(i=0;i<n;++i){
			cin>>r;
			p.push(r);
		}
		while(k--){
			cout<<p.top()<<' ';
			p.pop();
		}
		cout<<"\n";
	}
	return 0;
}

