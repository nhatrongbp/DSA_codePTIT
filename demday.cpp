#include <bits/stdc++.h>
using namespace std;
int t;
long long n,m=123456789;
long long power(int a, long long b)
{
	if(b==0)return 1;
	long long x=power(a,b/2);
	if(b%2==0)return x*x%m;
	return a*(x*x%m)%m;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		cout<<power(2,n-1)<<"\n";
	}
	return 0;
}/*
n	array								res
1	[1]									1
2	[1 1] [2]							2
3	[1 1 1] [1 2] [2 1] [3]				4
4	[1 1 1 1] [1 1 2] [1 2 1] [2 1 1]	8
	[2 2] [1 3] [3 1] [4]
5	[1 1 1 1 1][1 1 1 2][1 1 2 1]		16
	[1 2 1 1][2 1 1 1][[1 1 3][1 3 1]
	[3 1 1][1 4][4 1][1 2 2][2 1 2]
	[2 2 1][2 3][3 2][5]
	...
n										2^(n-1)*/
