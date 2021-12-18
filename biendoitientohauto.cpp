#include <bits/stdc++.h>
using namespace std;
int t,i;
string s,s1,s2,s3;
int main()
{
	cin>>t;
	while(t--){
		cin>>s;
		stack<string> st;
		for(i=s.length()-1;i>=0;--i){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
				s1=st.top();st.pop();
				s2=st.top();st.pop();
				s3=s1+s2+s[i];
				st.push(s3);
			}
			else st.push(string(1,s[i]));
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}

