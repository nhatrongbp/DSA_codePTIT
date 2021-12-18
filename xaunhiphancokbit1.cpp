#include <bits/stdc++.h>
using namespace std;

int main()
{
	short t,n,k,a[25];cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;++i){
			if(i<n-k)a[i]=0;
			else a[i]=1;
		}
		bool bull=true;
		while(bull){
			int j;
			for(j=0;j<n;++j)cout<<a[j];cout<<"\n";
			short x=0,y=0;
			for(j=n-1;j>=0;j--){
				if(a[j])++x;
				else {
					++y;
					if(x>0)break;
				}
				if(j>0&&y==n-k){
					bull=false;
					break;
				}
			}
			a[j]=1;
			for(int i=0;i<y;++i)a[++j]=0;
			for(int i=1;i<x;++i)a[++j]=1;
		}
	}
	return 0;
}

