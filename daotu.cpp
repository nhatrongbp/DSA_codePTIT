#include <bits/stdc++.h>
using namespace std;
string s,tamp;
int t;
int main()
{
	cin>>t;
	getline(cin,tamp);
	while(t--){
		stack<string> st;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>tamp)st.push(tamp);
		while(!st.empty()){
			cout<<st.top()<<' ';
			st.pop();
		}
		cout<<"\n";
	}
	return 0;
}

