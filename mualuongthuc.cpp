#include <bits/stdc++.h>
using namespace std;
int t,messi,neymar,suarez;
int main()
{
	cin>>t;
	while(t--){
		cin>>neymar>>suarez>>messi;
		if(neymar<messi)cout<<"-1\n";
		else if(suarez>6&&6*(neymar-messi)<messi)cout<<"-1\n";
		else if((suarez*messi)%neymar==0)cout<<(suarez*messi)/neymar<<"\n";
		else cout<<(suarez*messi)/neymar+1<<"\n";
	}
	return 0;
}
