#include <bits/stdc++.h>
using namespace std;
int s,t,d,i,o[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>s>>d;
		if(s==0&&d==1){
			cout<<"0\n";
			continue;
		}
		if(s==0||s>9*d){
			cout<<"-1\n";
			continue;
		}
		memset(o,0,sizeof(o));
		o[0]=1;--s;
		for(i=d-1;i>=0;--i){
			if(s>=9){
				o[i]=9;
				s-=9;
			}
			else {
				o[i]+=s;
				break;
			}
		}
		for(i=0;i<d;++i)cout<<o[i];cout<<"\n";
	}
	return 0;
}

