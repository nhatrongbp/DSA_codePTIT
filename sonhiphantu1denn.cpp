#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> v;
	queue<string> q;
	q.push("1");
	for(int i=0;i<10005;++i){
		v.push_back(q.front());
		q.push(q.front()+"0");
		q.push(q.front()+"1");
		q.pop();
	}
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cout<<v[i]<<' ';
		cout<<"\n";
	}
	return 0;
}

