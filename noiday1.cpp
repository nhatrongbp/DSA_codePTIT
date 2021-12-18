#include <bits/stdc++.h>
using namespace std;
int t,n;
long long res,a,b;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		priority_queue <long long, vector <long long>, greater<long long> > pq;
		for(int i=0;i<n;++i){
			cin>>res;
			pq.push(res);
		}
		res=0;
		while(pq.size()>1){
			a=pq.top();pq.pop();
			b=pq.top();pq.pop();
			res=res+a+b;
			pq.push(a+b);
		}
		cout<<res<<"\n";
	}
	return 0;
}

