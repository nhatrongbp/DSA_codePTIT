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
	string n;
	int t;cin>>t;
	while(t--){
		cin>>n;
		int m;
		for(int i=0;i<res[n.length()-1].size();++i){
			if(res[n.length()-1][i]==n)m=i;
		}
		for(int i=0;i<n.length();++i){
			if(m>=pow(2,n.length()-i-1)){
				cout<<1;
				m-=pow(2,n.length()-i-1);
			}
			else cout<<0;
		}
		cout<<"\n";
	}
	return 0;
}

