#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n],b,sum=0,limit=2001;
	for(int i=0;i<n;++i){
		cin>>a[i];
		sum=sum+a[i]+1;
		limit=min(limit,a[i]);
	}
	int res=sum;
	for(int m=1;m<=limit;++m){
		sum=0;
		int i=0;
		for(i=0;i<n;++i){
			b=a[i]/(m+1)+1;//cout<<b<<' ';
			if(a[i]/b!=m)break;
			else sum=sum+b;
		}
		if(i==n)res=min(res,sum);
		//cout<<endl;
	}
	cout<<res;
	return 0;
}/*		6	16	18	22	27
m=0		7	17	19	23	28	=94
m=1		4	9	10	12	14	=49
m=2		3	6	7	8	10	=34
m=3		2	5	5	6	7	=25
m=4		2	break because 6/2!=4
m=5		2	break because 6/2!=5
m=6		1	3	break because 16/3!=6
b[i]=a[i]/(m+1)+1 and if(a[i]/b[i]!=m)break;
m: from 0 to min(arr)
O(arr.size()*arr.min())
*/
