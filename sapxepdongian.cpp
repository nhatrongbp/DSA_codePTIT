#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin>>n;
	int p[n+1];//index of a[i]
	//before sorting, if ...a[i-1]<a[i]<a[i+1]... is a LIS
	//then after sorting, we maintain i-1<i<i+1
	for(int i=0;i<n;++i){
		cin>>a;
		p[a]=i;
	}
	int dem=1,res=n;
	for(int i=2;i<=n;++i){
		//if x<y (i-1<i) then indexof(x)<indexof(y)
		//we've found a new element of current LIS
		if(p[i]>p[i-1])++dem;
		//else we start a new LIS
		else dem=1;
		//update min
		res=min(res,n-dem);
	}
	cout<<res<<"\n";
	return 0;
}
/*
index:	1	2	3	4	5
arr:	4	1	2	5	3	(arr before sorting)

arr:	1	2	3	4	5	(arr after sorted)
index:	2	3	5	1	4
*/
