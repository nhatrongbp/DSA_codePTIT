#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d,e,o,t,i,n[1005];cin>>t;
	while(t--){
		cin>>n[0];
		for(i=1;i<=n[0];++i)cin>>n[i];
		for(i=n[0]-1;i>=1;--i){
			if(n[i]<n[i+1]){
				e=i+1;
				for(o=i+1;o<=n[0];++o){
					if(n[o]>n[i]&&n[o]<n[e])e=o;
				}
				d=n[i];n[i]=n[e];n[e]=d;
				break;
			}
		}
		if(i==0)for(int j=n[0];j>0;--j)cout<<n[j]<<' ';
		else {
			for(int j=1;j<=i;++j)cout<<n[j]<<' ';
			for(int j=n[0];j>i;--j)cout<<n[j]<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

