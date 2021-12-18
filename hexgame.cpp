#include <bits/stdc++.h>
using namespace std;
map<string, int> ms, me;

string start_left(string s1){
	return string({s1[3], s1[0], s1[2], s1[7], s1[4],
	s1[1], s1[6], s1[8], s1[5], s1[9]});
}
 
string start_right(string s1){
	return string({s1[0], s1[4], s1[1], s1[3], s1[8],
	s1[5], s1[2], s1[7], s1[9], s1[6]});
}
 
string end_right(string s1){
	return string({s1[0], s1[2], s1[6], s1[3], s1[1],
	s1[5], s1[9], s1[7], s1[4], s1[8]});
}
 
string end_left(string s1){
	return string({s1[1], s1[5], s1[2], s1[0], s1[4],
	s1[8], s1[6], s1[3], s1[7], s1[9]});
}

void bfs_start(string s)
{
	queue<string> q;
	q.push(s);
	while(!q.empty()){
		string num=q.front();q.pop();
		string l=start_left(num);
		string r=start_right(num);
		if(ms[l]==0){
			q.push(l);
			ms[l]=ms[num]+1;
		}
		if(ms[r]==0){
			q.push(r);
			ms[r]=ms[num]+1;
		}
		if(ms[q.back()]>=15) break;
	}
}

int bfs_end(string s)
{
	queue<string> q;
	q.push(s);
	while(!q.empty()){
		string num=q.front();q.pop();
		if(ms[num]!=0)return ms[num]+me[num];
		
		string l=end_left(num);
		string r=end_right(num);
		if(me[l]==0){
			q.push(l);
			me[l]=me[num]+1;
		}
		if(me[r]==0){
			q.push(r);
			me[r]=me[num]+1;
		}
		if(me[q.back()]>=15) break;
	}
}

int main()
{
	//int t;cin>>t;
	//while(t--){
		//ms.clear();me.clear();
		string start,finish="1238004765";
		for(int i=0;i<10;++i){
			char c;cin>>c;
			start+=c;
		}
		bfs_start(start);
		cout<<bfs_end(finish)<<"\n";
	//}
	return 0;
}
