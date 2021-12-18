#include <bits/stdc++.h>
using namespace std;
int t,n;
string s,temp;
vector<string> res;
void Try(int begin, int idx)
{
	for(int i=begin;i<n;++i){
		temp[idx]=s[i];
		string str="";
		for(int j=0;j<=idx;++j)str+=temp[j];
		res.push_back(str);
		Try(i+1,idx+1);
	}
}
int main()
{
	cin>>t;
	while(t--){
		res.clear();
		cin>>n>>s;temp=s;
		Try(0,0);
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();++i)cout<<res[i]<<' ';
		cout<<"\n";
	}
	return 0;
}

