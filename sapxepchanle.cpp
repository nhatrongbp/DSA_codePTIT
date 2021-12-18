#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	int a[n+5];
	vector<int> le,chan;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(i%2!=0)chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(le.begin(),le.end());
	sort(chan.begin(),chan.end(),greater<int>() );
	int nchan=-1,nle=-1;
	for(int i=0;i<n;++i){
		if(i%2!=0)cout<<chan[++nchan]<<' ';
		else cout<<le[++nle]<<' ';
	}
	return 0;
}

