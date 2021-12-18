#include <bits/stdc++.h>
using namespace std;
int t,n,res,a[100005],l[100005],r[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];
		l[0]=1;
		for(int i=1;i<n;++i){
			if(a[i]>a[i-1])l[i]=l[i-1]+1;
			else l[i]=1;
		}
		r[n-1]=1;
		for(int i=n-2;i>=0;--i){
			if(a[i]>a[i+1])r[i]=r[i+1]+1;
			else r[i]=1;
		}
		res=l[0]+r[0]-1;
		for(int i=1;i<n;++i)res=max(res,l[i]+r[i]-1);
		cout<<res<<"\n";
	}
	return 0;
}/*
arr:		12	4	78	90	45	23
from left	1	1	2	3	1	1
from right	2	1	1	3	2	1
rect arr:	2	1	2	5	2	1(day tam giac dai nhat neu coi a[i] la dinh)*/
