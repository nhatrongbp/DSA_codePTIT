#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;cin>>t;
	while(t--){
		cin>>n;
		unsigned long long res=0;
		long long temp;
		priority_queue	<long long> a;
		priority_queue	<long long,	vector <long long>, greater<long long> > b;
		for(int i=0;i<n;++i){
			cin>>temp;
			a.push(temp);
		}
		for(int i=0;i<n;++i){
			cin>>temp;
			b.push(temp);
		}
		while(n--){
			res=res+a.top()*b.top();
			a.pop();b.pop();
		}
		cout<<res<<"\n";
	}
	return 0;
}

