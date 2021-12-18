#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int k;cin>>k;
		string s;cin>>s;
		int c[300]={0};
		for(int i=0;i<s.length();++i)++c[s[i]];
		priority_queue<int> pq;
		for(int i=0;i<300;++i){
			if(c[i]>0)pq.push(c[i]);
		}
		while(k--){
			if(pq.top()==0)break;
			int temp=pq.top();pq.pop();
			pq.push(temp-1);
		}
		long long res=0;
		while(!pq.empty()){
			res=res+pow(pq.top(),2);
			pq.pop();
		}
		cout<<res<<"\n";
	}
	return 0;
}

