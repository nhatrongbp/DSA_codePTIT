#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s,a,b;cin>>s;
		stack<string> st;
		for(int i=0;i<s.length();++i){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
				a=st.top();st.pop();
				b=st.top();st.pop();
				st.push(s[i]+b+a);
			}
			else st.push(string(1,s[i]));
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}

