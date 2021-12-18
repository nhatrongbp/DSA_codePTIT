#include <bits/stdc++.h>
using namespace std;
int stoint(string s)
{
	int r=0;
	for(int i=0;i<s.length();++i){
		r=r*10+int(s[i]-'0');
	}
	return r;
}
int main()
{
	vector<string> v;
	queue<string> q;
	q.push("9");
	for(int i=0;i<10005;++i){
		v.push_back(q.front());
		q.push(q.front()+"0");
		q.push(q.front()+"9");
		q.pop();
	}
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<v.size();++i){
			if(stoint(v[i])%n==0){
				cout<<v[i]<<"\n";
				break;
			}
		}
	}
	return 0;
}

