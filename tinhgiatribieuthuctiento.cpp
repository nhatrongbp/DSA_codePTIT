#include <bits/stdc++.h>
using namespace std;
int t,i,a,b;
string s;
int cal(char c,int x,int y)
{
	if(c=='+')return x+y;
	if(c=='-')return x-y;
	if(c=='*')return x*y;
	if(c=='/')return x/y;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>s;
		stack<int> st;
		for(i=s.length()-1;i>=0;--i){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
				a=st.top();st.pop();
				b=st.top();st.pop();
				st.push(cal(s[i],a,b));
			}
			else st.push(int(s[i]-'0'));
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}

