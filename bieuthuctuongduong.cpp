#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s,res="";
		cin>>s;
		stack<int> st;
		st.push(0);
		int n=s.length();
		for(int i=0;i<n;++i){
			if(s[i]=='('&&i==0)continue;
			else if(s[i]=='('&&i>0){
				if(s[i-1]=='+'){
					if(st.top()==0)st.push(0);
					else st.push(1);
				}
				else if(s[i-1]=='-'){
					if(st.top()==0)st.push(1);
					else st.push(0);
				}
			}
			else if(s[i]=='+'){
				if(st.top()==0)res+="+";
				else res+="-";
			}
			else if(s[i]=='-'){
				if(st.top()==0)res+="-";
				else res+="+";
			}
			else if(s[i]==')')st.pop();
			else res+=s[i];
		}
		cout<<res<<"\n";
	}
	return 0;
}
