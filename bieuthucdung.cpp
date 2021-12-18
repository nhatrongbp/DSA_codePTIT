#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<int> pos;//position of all '['
		for(int i=0;i<s.length();++i){
			if(s[i]=='[')pos.push_back(i);
		}
		int debt=0;//number of '[' waiting the ']'
		int res=0;//number of swaps
		int p=0;//pos[p] is the position of the next '['
		for(int i=0;i<s.length();++i){
			if(s[i]=='['){
				++debt;
				++p;
			}
			else if(s[i]==']')--debt;
			if(debt<0){
				res+=pos[p]-i;
				//swap pos[p]-i times so as to swap(this ']', next '[')
				swap(s[i],s[pos[p]]);
				++p;
				debt=1;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

