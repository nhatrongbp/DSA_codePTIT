#include <bits/stdc++.h>
using namespace std;
int t,r,i,n;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		set<int> s;
		for(i=0;i<n;++i){
			cin>>r;
			s.insert(r);
		}
		if(s.size()<2){
			cout<<"-1\n";
			continue;
		}
		set<int>::iterator it=s.begin();
		cout<<*it<<' ';++it;cout<<*it<<"\n";
		cout<<"\n";
	}
	return 0;
}

