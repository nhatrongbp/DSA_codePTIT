#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;cin>>t;
	while(t--){
		int n;cin>>n;
		int four=0;
		while(n%7!=0&&n>=4){
			n-=4;++four;
		}
		if(n==0){
			for(i=0;i<four;++i)cout<<4;
			cout<<"\n";
			continue;
		}
		else if(n%7!=0){
			cout<<"-1\n";
			continue;
		}
		else {
			for(i=0;i<four;++i)cout<<4;
			for(i=0;i<n/7;++i)cout<<7;
			cout<<"\n";
		}
	}
	return 0;
}
