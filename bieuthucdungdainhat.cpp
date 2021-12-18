#include <bits/stdc++.h>
using namespace std;
bool bull[105];
int main()
{
	int t;cin>>t;
	while(t--){
		memset(bull,false,sizeof(bull));
		string s;
		cin>>s;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<s.length();++i){
			if(s[i]=='(')st.push(i);
			else {
				st.pop();
				if(!st.empty()){
					for(int j=st.top()+1;j<=i;++j)bull[j]=true;
				}
				else st.push(i);
			}
		}
		int res=0;
		for(int i=0;i<s.length();++i){
			if(bull[i])++res;
		}
		cout<<res<<"\n";
	}
	return 0;
}

