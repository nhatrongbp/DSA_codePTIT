#include <bits/stdc++.h>
using namespace std;
int main()
{
	deque<int> q;
	string s;
	int t,i;
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSHFRONT"){
			cin>>i;
			q.push_front(i);
		}
		else if(s=="PRINTFRONT"){
			if(q.empty())cout<<"NONE\n";
			else cout<<q.front()<<"\n";
		}
		else if(s=="PUSHBACK"){
			cin>>i;
			q.push_back(i);
		}
		else if(s=="PRINTBACK"){
			if(q.empty())cout<<"NONE\n";
			else cout<<q.back()<<"\n";
		}
		else if(s=="POPFRONT"){
			if(!q.empty())q.pop_front();
		}
		else if(s=="POPBACK"){
			if(!q.empty())q.pop_back();
		}
	}
	return 0;
}
