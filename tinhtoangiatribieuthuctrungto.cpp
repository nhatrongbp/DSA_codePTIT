#include <bits/stdc++.h>
using namespace std;
#define ll long long

int prior(char c)
{
	if(c == '(' || c == ')')return 1;
	if(c == '+' || c == '-')return 2;
	if(c == '*' || c == '/')return 3;
}

ll stringtoll(string s)
{
	stringstream ss(s);
	ll n; ss>>n;
	return n;
}

ll solve()
{
	string s;cin>>s;
	stack<ll> num;
	stack<char> op;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '(' ) op.push(s[i]);
		else if(s[i] == ')'){
			while(!op.empty() && op.top() != '('){
				ll n2 = num.top(); num.pop();
				ll n1 = num.top(); num.pop();
				if(op.top() == '+') num.push(n1+n2);
				else if(op.top() == '-')num.push(n1-n2);
				else if(op.top() == '*')num.push(n1*n2);
				else if(op.top() == '/')num.push(n1/n2);
				op.pop();
			}
			op.pop();
		}
		else if(s[i] >= '0' && s[i] <='9'){
			string str="";
			while(s[i] >= '0' && s[i] <='9' && i<s.length()){
				str+=s[i];
				i++;
			}
			num.push(stringtoll(str));
			i--;
		}
		else{//operator
			if(op.empty())op.push(s[i]);
			else{
				if(op.top() != '('){
					while(!op.empty() && prior(s[i]) <= prior(op.top())){
						ll n2 = num.top(); num.pop();
						ll n1 = num.top(); num.pop();
						if(op.top() == '+') num.push(n1+n2);
						else if(op.top() == '-')num.push(n1-n2);
						else if(op.top() == '*')num.push(n1*n2);
						else if(op.top() == '/')num.push(n1/n2);
						op.pop();
					}
					op.push(s[i]);
				}
				else op.push(s[i]);
			}
		}
	}
	while(num.size()>1){
		ll n2 = num.top(); num.pop();
		ll n1 = num.top(); num.pop();
		if(op.top() == '+') num.push(n1+n2);
		else if(op.top() == '-')num.push(n1-n2);
		else if(op.top() == '*')num.push(n1*n2);
		else if(op.top() == '/')num.push(n1/n2);
		op.pop();
	}
	return num.top();
}

int main()
{
	int t;cin>>t;
	while(t--){
		cout<<solve()<<'\n';
	}
	return 0;
}


