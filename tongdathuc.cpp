#include <bits/stdc++.h>
using namespace std;
int t,a[10005];
string s1,s2;
int main()
{
	cin>>t;
	getline(cin,s1);
	while(t--){
		getline(cin,s1);
		getline(cin,s2);
		memset(a,0,sizeof(a));
		int i=0;
		while(i<s1.length()){
			int heso=0;
			while(s1[i]>='0'&&s1[i]<='9'){
				heso=heso*10+s1[i]-'0';
				++i;
			}
			while(s1[i]<'0'||s1[i]>'9')++i;
			int somu=0;
			while(i<s1.length()&&s1[i]>='0'&&s1[i]<='9'){
				somu=somu*10+s1[i]-'0';
				++i;
			}
			while(i<s1.length()&&(s1[i]<'0'||s1[i]>'9'))++i;
			//cout<<heso<<" "<<somu<<endl;
			a[somu]+=heso;
		}
		i=0;
		while(i<s2.length()){
			int heso=0;
			while(s2[i]>='0'&&s2[i]<='9'){
				heso=heso*10+s2[i]-'0';
				++i;
			}
			while(s2[i]<'0'||s2[i]>'9')++i;
			int somu=0;
			while(i<s2.length()&&s2[i]>='0'&&s2[i]<='9'){
				somu=somu*10+s2[i]-'0';
				++i;
			}
			while(i<s2.length()&&(s2[i]<'0'||s2[i]>'9'))++i;
			//cout<<heso<<" "<<somu<<endl;
			a[somu]+=heso;
		}
		vector< pair<int,int> > v;
		pair<int,int> p;
		for(i=10000;i>=0;--i){
			if(a[i]>0){
				p.first=a[i];
				p.second=i;
				v.push_back(p);
			}
		}
		for(i=0;i<v.size();++i){
			if(i==0)cout<<v[i].first<<"*x^"<<v[i].second;
			else cout<<" + "<<v[i].first<<"*x^"<<v[i].second;
		}
		cout<<"\n";
	}
	return 0;
}
