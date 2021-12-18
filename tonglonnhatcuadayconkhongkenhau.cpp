#include <bits/stdc++.h>
using namespace std;
int t,n,a[1000005];
long long inc[2],exc[2],res;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];
		inc[0]=a[0];exc[0]=0;res=inc[0];
		for(int i=1;i<n;++i){
			inc[1]=exc[0]+a[i];
			exc[1]=max(exc[0],inc[0]);
			res=max(res,max(inc[1],exc[1]));
			inc[0]=inc[1];exc[0]=exc[1];
		}
		cout<<res<<"\n";
	}
	return 0;
}/*
inc[i]=ecx[i-1]+a[i] //neu chon i, phai dam bao i-1 ko dc chon
exc[i]=max(exc[i-1],inc[i-1]) //neu ko chon i, =max(chon i-1, ko chon i-1)
	5	5	10	100	10	5
inc	5	5	15	105	25	110	
exc	0	5	5	15	105	105
res	=110

	3	2	7	10
inc	3	2	10	13
exc	0	3	3	10
res	=13
	10	1	10	1	10	20
inc	10	1	20	11	30	40
exc	0	10	10	20	20	30
res
*/
