#include <bits/stdc++.h>
using namespace std;
string rotatel(string s)
{
	string res="";
	res+=s[0];res+=s[4];res+=s[1];
	res+=s[3];res+=s[5];res+=s[2];
	return res;
}
string rotater(string s)
{
	string res="";
	res+=s[3];res+=s[0];res+=s[2];
	res+=s[4];res+=s[1];res+=s[5];
	return res;
}
int bfs(string u, string v)
{
	set<string> s;
	s.insert(u);
	queue< pair<string,int> > q;
	q.push({u,0});
	while(!q.empty()){
		pair<string,int> temp=q.front();q.pop();
		if(temp.first==v)return temp.second;
		string l=rotatel(temp.first);
		if(s.find(l)==s.end()){
			s.insert(l);
			q.push({l,temp.second+1});
		}
		string r=rotater(temp.first);
		if(s.find(r)==s.end()){
			s.insert(r);
			q.push({r,temp.second+1});
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		string s="123456",e="123456";
		for(int i=0;i<6;++i)cin>>s[i];
		for(int i=0;i<6;++i)cin>>e[i];
		cout<<bfs(s,e)<<"\n";
	}
	return 0;
}/*
123456	152463
		413526*/
