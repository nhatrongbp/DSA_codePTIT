#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h[100005],a[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;++i)cin>>a[i];
		stack<int> s;
		s.push(0);
		for(i=1;i<n;++i){
			while(!s.empty()&&a[i]>a[s.top()]){
				h[s.top()]=a[i];
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			h[s.top()]=-1;
			s.pop();
		}
		for(i=0;i<n;++i)cout<<h[i]<<' ';
		cout<<"\n";
	}
	return 0;
}

