#include <bits/stdc++.h>
using namespace std;
int t,i,e,n;
string str;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		getline(cin,str);getline(cin,str);
		set<short> s;
		for(i=0;i<str.length();++i){
			if(str[i]>='0'&&str[i]<='9')s.insert((short)str[i]-'0');
			if(s.size()==10)break;
		}
		for(set<short>::iterator it=s.begin();it!=s.end();++it){
			cout<<*it<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

