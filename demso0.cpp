#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h;
bool bull;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;bull=true;r=0;
		for(i=0;i<n;++i){
			cin>>h;
			if(h&&bull){
				bull=false;
				r=i;
			}
		}
		if(h==0)r=n;
		cout<<r<<"\n";
	}
	return 0;
}

