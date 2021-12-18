#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<short> st;
		st.push(1);
		int cnt=1;
		for(int i=0;i<s.length();++i){
			if(s[i]=='I'){
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
				st.push(++cnt);
			}
			else st.push(++cnt);
		}
		while(!st.empty()){
			cout<<st.top();st.pop();
		}
		cout<<"\n";
	}
	return 0;
}

