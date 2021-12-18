#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i,t;cin>>t;
	while(t--){
		cin>>s;
		i=s.size();
		while(i){
			if(s[i-1]=='1')s[i-1]='0';
			else {
				s[i-1]='1';
				break;
			}
			--i;
		}
		cout<<s<<"\n";
	}
	return 0;
}

