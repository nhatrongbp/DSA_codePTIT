#include <bits/stdc++.h>
using namespace std;
int t,r,i,j,n;
bool p[1000005];
int main()
{
	memset(p,true,sizeof(p));
	p[0]=false;p[1]=false;
	for(i=2;i<=1000000;++i){
		if(p[i]){
			for(j=2*i;j<=1000000;j+=i)p[j]=false;
		}
	}
	cin>>t;
	while(t--){
		cin>>n;
		bool bull=true;
		for(i=2;i<=n/2;++i){
			if(p[i]&&p[n-i]){
				cout<<i<<' '<<n-i<<"\n";
				bull=false;
				break;
			}
		}
		if(bull)cout<<"-1\n";
	}
	return 0;
}

