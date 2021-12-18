#include <bits/stdc++.h>
using namespace std;
int t,n;
long long k,f[93];
//xau n duoc tao boi xau n-2 noi voi xau n-1
//i<=f[n-2] nghia la i thuoc xau n-2
//i>f[n-2] nghia la i thuoc xau n-1
string fibo(int a,long long b)
{
	if(a==1)return "0";
	if(a==2)return "1";
	if(b<=f[a-2])return fibo(a-2,b);
	else return fibo(a-1,b-f[a-2]);
}
int main()
{
	cin>>t;
	f[1]=1;f[2]=1;
	for(int i=3;i<=93;++i)f[i]=f[i-2]+f[i-1];
	while(t--){
		cin>>n>>k;
		cout<<fibo(n,k)<<"\n";
	}
	return 0;
}/*
n	array		length
1	a			1
2	b			1
3	a b			2
4	b ab		3
5	ab bab		5
6	bab abbab	8
...
n	n-2 n-1		f[n-2]+f[n-1]
*/	
