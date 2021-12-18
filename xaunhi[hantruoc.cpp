#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	short t;cin>>t;
	while(t--){
		cin>>s;
		bool bull=true;
		for(int i=s.length()-1;i>=0;--i){
			if(s[i]=='1'){
				s[i]='0';
				break;
			}
			else{
				s[i]='1';
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}

