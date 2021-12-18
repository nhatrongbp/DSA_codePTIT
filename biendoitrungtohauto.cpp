#include <bits/stdc++.h>
using namespace std;
short prio(char c)
{
	if(c=='^')return 3;
	if(c=='*'||c=='/')return 2;
	if(c=='+'||c=='-')return 1;
	//return 0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<char> st;
		for(int i=0;i<s.length();++i){
			if(s[i]=='(')st.push(s[i]);
			else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
				/*while(!st.empty()&&prio(s[i])<=prio(st.top())){
					cout<<st.top();
					st.pop();
				}
				st.push(s[i]);*/
				while(!st.empty()&&st.top()!='('){
					if(prio(s[i])<=prio(st.top())){
						cout<<st.top();st.pop();
					}
					else break;
				}
				st.push(s[i]);
			}
			else if(s[i]==')'){
				while(st.top()!='('){
					cout<<st.top();
					st.pop();
				}
				st.pop();
			}
			else cout<<s[i];
		}
		while(!st.empty()){
			cout<<st.top();st.pop();
		}
		cout<<"\n";
	}
	return 0;
}

