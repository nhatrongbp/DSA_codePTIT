#include <bits/stdc++.h>
using namespace std;
int t,r,i,n;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		priority_queue < int,vector< int>, greater<int> > p;
		for(i=0;i<n;++i){
			cin>>r;
			p.push(r);
		}
		while(!p.empty()){
			cout<<p.top()<<' ';
			p.pop();
		}
		cout<<"\n";
	}
	return 0;
}

