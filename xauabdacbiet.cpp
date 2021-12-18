#include <bits/stdc++.h>
using namespace std;
bool abstring(string str, int k)
{
	int num=0;//so luong day k chu A lien tiep
	int cnt;//so chu A lien tiep
	if(str[0]=='A')cnt=1;
	else cnt=0;
	for(int i=1;i<str.length();++i){
		if(str[i]=='A')++cnt;
		else cnt=0;
		if(cnt==k)++num;
		if(cnt>k)return false;
		if(num>1)return false;
	}
	if(num==1)return true;
	else return false;
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<string> res;
	string s="";
	for(int i=0;i<n;++i)s+="A";
	if(abstring(s,k))res.push_back(s);
	for(int i=1;i<pow(2,n);++i){
		for(int j=s.length()-1;j>=0;--j){
			if(s[j]=='A'){
				s[j]='B';
				break;
			}
			else s[j]='A';
		}
		if(abstring(s,k))res.push_back(s);
	}
	cout<<res.size()<<"\n";
	for(int i=0;i<res.size();++i)cout<<res[i]<<"\n";
	return 0;
}
