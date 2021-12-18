#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> res[10];
	res[0].push_back("0");
	res[0].push_back("1");
	for(int i=1;i<10;++i){
		stack<string> st;
		for(int j=0;j<res[i-1].size();++j){
			res[i].push_back("0"+res[i-1][j]);
			st.push("1"+res[i-1][j]);
		}
		while(!st.empty()){
			res[i].push_back(st.top());
			st.pop();
		}
	}
	int n,t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<res[n-1].size();++i)cout<<res[n-1][i]<<' ';
		cout<<"\n";
	}
	return 0;
}

