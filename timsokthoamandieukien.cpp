#include <bits/stdc++.h>
using namespace std;
bool a[100005],d[15];
void Try(int n)
{
	if(n<=100000)a[n]=true;
	for(int i=0;i<=5;++i){
		if(d[i]&&n*10+i<=100000){
			d[i]=false;
			Try(n*10+i);
			d[i]=true;
		}
	}
}
int main()
{
	memset(a,false,sizeof(a));
	memset(d,true,sizeof(d));
	int n=0;Try(n);
	int t;cin>>t;
	while(t--){
		int l,r,res=0;
		cin>>l>>r;
		for(int i=l;i<=r;++i)if(a[i])++res;
		cout<<res<<"\n";
	}
	return 0;
}

