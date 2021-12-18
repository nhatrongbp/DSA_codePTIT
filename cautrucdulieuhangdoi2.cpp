#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> q;
	string s;
	int t,i;
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			cin>>i;
			q.push(i);
		}
		else if(s=="PRINTFRONT"){
			if(q.empty())cout<<"NONE\n";
			else cout<<q.front()<<"\n";
		}
		else if(!q.empty())q.pop();
	}
	return 0;
}
