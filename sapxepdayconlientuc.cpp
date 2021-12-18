#include <bits/stdc++.h>
using namespace std;
int t,n,a[1000005],l[1000005],r[1000005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(i>0)l[i]=max(l[i-1],a[i]);
			else l[i]=a[i];
		}
		for(int i=n-1;i>=0;--i){
			if(i<n-1)r[i]=min(r[i+1],a[i]);
			else r[i]=a[i];
		}
		for(int i=0;i<n;++i){
			if(l[i]!=r[i]){
				cout<<i+1<<' ';
				break;
			}
		}
		for(int i=n-1;i>=0;--i){
			if(l[i]!=r[i]){
				cout<<i+1<<"\n";
				break;
			}
		}
	}
	return 0;
}/*
10	12	20	30	25	40	32	31	35	50	60

10	12	20	30	30	40	40	40	40	50	60
10	12	20	25	25	31	31	31	35	50	60*/
