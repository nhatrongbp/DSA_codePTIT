#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s1,s2;
	int i;
	string s;
	while(cin>>s){
		if(s=="push"){
			cin>>i;
			s1.push(i);
		}
		if(s=="pop"){
			s1.pop();
		}
		if(s=="show"){
			while(!s1.empty()){
				i=s1.top();s1.pop();
				s2.push(i);
			}
			while(!s2.empty()){
				i=s2.top();s2.pop();
				cout<<i<<' ';
				s1.push(i);
			}
			if(s1.empty())cout<<"empty";
			cout<<"\n";
		}
	}
	return 0;
}

