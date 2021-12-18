#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;++i)cin>>h[i];
		stack<int> st;
		st.push(-1);
		for(i=0;i<n;++i){
			if(st.top()==-1){
				cout<<i-st.top()<<' ';
				st.push(i);
			}
			else {
				while(st.top()!=-1&&h[i]>=h[st.top()]){
					st.pop();
				}
				cout<<i-st.top()<<' ';
				st.push(i);
			}
		}
		cout<<"\n";
	}
	return 0;
}

