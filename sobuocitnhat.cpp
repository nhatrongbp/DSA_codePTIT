#include <bits/stdc++.h>
using namespace std;
int t,n,a[1005],b[1005],r;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;r=1;
		for(int i=0;i<n;++i){
			cin>>a[i];b[i]=1;
			for(int j=0;j<i;++j){
				if(a[j]<=a[i])b[i]=max(b[i],b[j]+1);
				r=max(r,b[i]);
			}
		}
		cout<<n-r<<"\n";
	}
	return 0;
}/*
1 2 5 4 6 2
1 2 3 3 4 2

1 2 3 4 5 1 2 3 4 6
1 2 3 4 5 1 2 3 4 6*/
