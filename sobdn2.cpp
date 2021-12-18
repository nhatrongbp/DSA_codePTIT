#include <bits/stdc++.h>
using namespace std;

int divisible(string a, int n)
{
	int r=0;
	for(int i=0;i<a.length();++i){
		r=r*10+(a[i]-'0');
		r%=n;
	}
	return r;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		set<int> module;
		queue<string> q;
		q.push("1");
		while(true){
			int mod=divisible(q.front(),n);
			if(mod==0){
				cout<<q.front()<<"\n";
				break;
			}
			else if(module.find(mod)==module.end()){
				module.insert(mod);
				q.push(q.front()+"0");
				q.push(q.front()+"1");
			}
			q.pop();
		}
	}
	return 0;
}

