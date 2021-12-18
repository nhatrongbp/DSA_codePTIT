#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s1;
	string s;
	int i,t;cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			cin>>i;
			s1.push(i);
		}
		if(s=="POP"){
			if(!s1.empty())s1.pop();
		}
		if(s=="PRINT"){
			if(s1.empty())cout<<"NONE\n";
			else cout<<s1.top()<<"\n";
		}
	}
	return 0;
}

