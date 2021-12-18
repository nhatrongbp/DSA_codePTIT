#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,r,i,n,h;
	string s;
	cin>>t;
	while(t--){
		cin>>r>>s;cout<<r<<' ';
		for(i=s.length()-2;i>=0;--i){
			if(s[i]<s[i+1]){
				//cout<<"vi tri "<<i;
				h=i+1;
				for(n=i+1;n<s.length();++n){
					if(s[n]>s[i]&&s[n]<=s[h])h=n;
				}
				//cout<<" voi vi tri "<<h<<endl;
				char temp=s[i];s[i]=s[h];s[h]=temp;
				break;
			}
		}
		if(i==-1)cout<<"BIGGEST";
		else {
			for(int j=0;j<=i;++j)cout<<s[j];
			for(int j=s.length()-1;j>i;--j)cout<<s[j];
		}
		cout<<"\n";
	}
	return 0;
}


