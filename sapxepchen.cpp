#include <bits/stdc++.h>
using namespace std;

int main()
{
	short n;cin>>n;
	short a[n];
	priority_queue < short,vector<short>,greater<short> > p,q;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		cout<<"Buoc "<<i<<":";
		p.push(a[i]);
		while(!p.empty()){
			cout<<' '<<p.top();
			q.push(p.top());
			p.pop();
		}
		p=q;
		q=priority_queue < short,vector<short>,greater<short> > ();
		cout<<"\n";
	}
	return 0;
}

