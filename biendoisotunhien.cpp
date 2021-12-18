#include <bits/stdc++.h>
using namespace std;
int t,n;
int bfs(int u)
{
	set<int> s;
	s.insert(u);
	queue< pair<int,int> > q;
	pair<int,int> p,temp;
	p.first=u;p.second=0;
	q.push(p);
	while(!q.empty()){
		p=q.front();q.pop();
		//cout<<"current level: "<<p.second<<endl;
		//cout<<"pop: "<<"first: "<<p.first<<" second: "<<p.second<<endl;
		if(p.first==1)return p.second;
		for(int i=2;i<=sqrt(p.first);++i){
			if(p.first%i==0&&s.find(p.first/i)==s.end()){
				s.insert(p.first/i);
				q.push({p.first/i,p.second+1});
				//cout<<"push: "<<"first: "<<temp.first<<" second: "<<temp.second<<endl;
			}
		}
		if(s.find(p.first-1)==s.end()){
			s.insert(temp.first);
			q.push({p.first-1,p.second+1});
			//cout<<"push: "<<"first: "<<temp.first<<" second: "<<temp.second<<endl;
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		cout<<bfs(n)<<"\n";
	}
	return 0;
}

