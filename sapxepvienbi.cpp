#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;int a[n+5];
	string s;cin>>s;
	for(int i=0;i<n;++i){
		if(s[i]=='T')a[i]=1;
		else if(s[i]=='X')a[i]=0;
		else a[i]=2;
	}
	int l=0,m=0,r=n-1,res=0;
	while(m<=r){
		switch(a[m]){
			case 0:
				if(a[l]!=a[m]){
					swap(a[l],a[m]);
					++res;
				}
				++l;++m;
				break;
			case 1:
				m++;
				break;
			case 2:
				if(a[m]!=a[r]){
					swap(a[m],a[r]);
					++res;
				}
				--r;
				break;
		}
	}
	cout<<res;
	return 0;
}/*
110222120
init:	l=0 m=0 r=8
a[m]=1	l=0 m=1 r=8
a[m]=1	l=0 m=2 r=8
a[m]=0	l=1	m=3	r=8	swap:011222120	1
a[m]=2	l=1	m=3	r=7	swap:011022122	2
a[m]=0	l=2	m=4	r=7	swap:001122122	3
a[m]=2	l=2	m=4	r=6	swap:001122122
a[m]=2	l=2	m=4	r=5	swap:001112222	4
a[m]=1	l=2	m=5	r=5
a[m]=2 	l=2	m=5	r=4 swap
m>r break*/
