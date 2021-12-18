#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
	string res = "";
	stack<char> st;
	st.push('+');
	int n = s.length();
	for(int i=0; i<n; ++i){
		if(s[i] == '(' && i==0) continue;
		else if(s[i] == '(' && i>0){
			if(s[i-1] == '+' || s[i-1] == '-')
				st.push(s[i-1]);
		}
		if(st.empty())continue;
		if(st.top() == '-'){
			if(s[i] == '-') s[i] = '+';
			else if(s[i] == '+') s[i] = '-';
		}
		else if(s[i] == ')') st.pop();
	}
	for(int i=0; i<n; i++){
		if(s[i] != '(' && s[i] != ')')
			res.push_back(s[i]);
	}
	return res;
}

int main()
{
	string str = "B19OLP081";
	int t; cin>>t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		//cout<<solve(s1)<<' '<<solve(s2)<<endl;
		if(solve(s1) == solve(s2)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

