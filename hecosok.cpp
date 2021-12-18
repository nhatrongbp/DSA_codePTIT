#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int k,t;cin>>t;
	while(t--){
		cin>>k>>a>>b;
		while(a.length()<b.length())a="0"+a;
		while(b.length()<a.length())b="0"+b;
		int nho=0;
		string res="";
		for(int i=a.length()-1;i>=0;--i){
			int temp=int(a[i]-'0'+b[i]-'0')+nho;
			res=char(temp%k+'0')+res;;
			nho=temp/k;
		}
		if(nho>0)cout<<nho;
		cout<<res<<"\n";
	}
	return 0;
}

