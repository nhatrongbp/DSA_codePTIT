#include <bits/stdc++.h>
using namespace std;
string redundant_brackets(string s)
{
	stack <char> st;
	for(int i=0;i<s.length();++i){
		if(s[i]==')'){
			bool bull=true;
			while(st.top()!='('){
				if(st.top()=='+'||st.top()=='-'
				||st.top()=='*'||st.top()=='/'){
					bull=false;
				}
				st.pop();
			}
			st.pop();
			if(bull)return "Yes";
		}
		else st.push(s[i]);
	}
	return "No";
}
int main()
{
	string str;
	int t;
	cin>>t;
	while(t--){
		cin>>str;
		cout<<redundant_brackets(str)<<"\n";
	}
	return 0;
}

