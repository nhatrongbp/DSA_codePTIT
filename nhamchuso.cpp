#include <bits/stdc++.h>
using namespace std;
int vtr(int n,int x,int y)
{
	int res=0,m=0;
	while(n){
		m=m*10+n%10;
		n/=10;
	}
	while(m){
		if(m%10==x)res=res*10+y;
		else res=res*10+m%10;
		m/=10;
	}
	return res;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<vtr(a,6,5)+vtr(b,6,5)<<' '<<vtr(a,5,6)+vtr(b,5,6);
	return 0;
}

