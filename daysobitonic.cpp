#include <bits/stdc++.h>
using namespace std;
int t,n,res,a[1005],l[1005],r[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a[i];
			l[i]=a[i];
			r[i]=a[i];
		}
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(l[j]+a[i]>l[i]&&a[i]>a[j]){
					l[i]=l[j]+a[i];
				}
			}
		}
		for(int i=n-2;i>=0;--i){
			for(int j=n-1;j>i;--j){
				if(r[j]+a[i]>r[i]&&a[i]>a[j]){
					r[i]=r[j]+a[i];
				}
			}
		}
		res=l[0]+r[0]-a[0];
		for(int i=0;i<n;++i)res=max(res,l[i]+r[i]-a[i]);
		cout<<res<<"\n";
	}
	return 0;
}

