#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d,e,o,t,i,n[1005];cin>>t;
	while(t--){
		cin>>n[0];
		bool bull=true;
		for(i=1;i<=n[0];++i){
			n[i]=i;
			cout<<i;
		}
		while(bull){
			for(i=n[0]-1;i>=1;--i){
				if(n[i]<n[i+1]){
					e=i+1;
					for(o=i+1;o<=n[0];++o){
						if(n[o]>n[i]&&n[o]<n[e])e=o;
					}
					d=n[i];n[i]=n[e];n[e]=d;
					int k=n[0];
					for(int j=i+1;j<=(n[0]+i+1)/2;++j){
						int temp=n[j];
						n[j]=n[k];
						n[k]=temp;
						--k;
					}
					break;
				}
			}
			if(i==0)bull=false;
			else {
				cout<<' ';
				for(int j=1;j<=n[0];++j)cout<<n[j];
			}
		}
		cout<<"\n";
	}
	return 0;
}

