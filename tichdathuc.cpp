#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int a[m],b[n],c[m+n-1]={0};
		for(int i=0;i<m;++i)cin>>a[i];
		for(int i=0;i<n;++i)cin>>b[i];
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j)c[i+j]+=a[i]*b[j];
		}
		for(int i=0;i<m+n-1;++i)cout<<c[i]<<' ';
		cout<<"\n";
	}
	return 0;
}/*
[1+3(2)+2(3)]*[2+4(2)]
[2+4(2)]+[6(2)+12(4)]*[4(3)+8(5)]
2+0(1)+10(2)+4(3)+12(4)+8(5)*/
