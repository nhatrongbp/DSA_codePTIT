#include <bits/stdc++.h>
using namespace std;
void egyptian(long long tu, long long mau)
{
	if(mau%tu==0){
		cout<<1<<"/"<<mau/tu;
		return;
	}
	long long d=mau/tu+1;
	cout<<1<<"/"<<d<<" + ";
	return egyptian(tu*d-mau,mau*d);
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long p,q;cin>>p>>q;
		egyptian(p,q);
		cout<<"\n";
	}
	return 0;
}

