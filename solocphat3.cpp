#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> v;
	queue<string> q;
	q.push("6");q.push("8");
	for(int i=0;i<34567;++i){
		v.push_back(q.front());
		q.push(q.front()+"6");
		q.push(q.front()+"8");
		q.pop();
	}
	int t,r,i,n,h;
	cin>>t;
	while(t--){
		cin>>n;r=0;
		for(i=1;i<=n;++i)r+=pow(2,i);
		cout<<r<<"\n";
		for(i=r-1;i>=0;--i){
			cout<<v[i]<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

