#include <bits/stdc++.h>
using namespace std;
int t,r,a,m,i,n,k;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		priority_queue <int> pq;
		for(i=0;i<n+m;++i){
			cin>>a;
			pq.push(a);
		}
		for(i=0;i<n+m-k;++i)pq.pop();
		cout<<pq.top()<<"\n";
	}
	return 0;
}

