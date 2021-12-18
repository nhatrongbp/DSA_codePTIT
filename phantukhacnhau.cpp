#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h;
long long a;
bool bull;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;bull=true;
		queue<long long> q;
		for(i=0;i<n;++i){
			cin>>a;
			q.push(a);
		}
		for(i=1;i<n;++i){
			cin>>a;
			if(a!=q.front()&&bull){
				r=i;
				bull=false;
			}
			q.pop();
		}
		cout<<r<<"\n";
	}
	return 0;
}

