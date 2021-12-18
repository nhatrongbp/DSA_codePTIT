#include <bits/stdc++.h>
using namespace std;
vector<string> v;
bool square(string s1,string s2)
{
	int i=0,j=0,cnt=0;
	while(i<s1.length()&&j<s2.length()){
		if(s1[i]==s2[j]){
			++i;++j;++cnt;
		}
		else ++i;
	}
	return (cnt==s2.length());
}
int main()
{
	string s,temp;
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;v.clear();
		for(long long i=1;i*i*i<=n;++i){
			stringstream ss;
			ss<<i*i*i;ss>>temp;
			v.push_back(temp);
			//cout<<temp<<' ';
		}
		stringstream ss;
		ss<<n;ss>>s;
		bool found=false;
		for(int i=v.size()-1;i>=0;--i){
			if(square(s,v[i])){
				cout<<v[i]<<"\n";
				found=true;
				break;
			}
		}
		if(!found)cout<<"-1\n";
	}
	return 0;
}

