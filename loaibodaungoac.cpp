#include <bits/stdc++.h>
using namespace std;
bool valid(string str)
{
	if(str=="")return false;
	bool bracket=false;
	int cnt=0;
	for(int i=0;i<str.length();++i){
		if(str[i]=='('){
			++cnt;
			bracket=true;
		}
		else if(str[i]==')'){
			--cnt;
			bracket=true;
		}
		if(cnt<0)return false;
	}
	if(!bracket)return false;
	return (cnt==0);
}
void bfs(string str)
{
	bool found=false;
	set<string> s;
	s.insert(str);
	queue<string> q;
	q.push(str);
	while(!q.empty()){
		str=q.front();q.pop();
		if(str.empty())continue;
		if(valid(str)){
			cout<<str<<' ';
			found=true;
		}
		if(!found){
			for(int i=0;i<str.length();++i){
				if(str[i]!='('&&str[i]!=')')continue;
				string temp=str.substr(0,i)+str.substr(i+1);
				if(s.find(temp)==s.end()){
					q.push(temp);
					s.insert(temp);
				}
			}
		}
	}
	if(!found)cout<<-1;
}
int main()
{
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		bfs(s);
		cout<<"\n";
	}
	return 0;
}

