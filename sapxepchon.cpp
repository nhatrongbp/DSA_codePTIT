#include <bits/stdc++.h>
using namespace std;

int main()
{
	short n;cin>>n;
	short p,a[n],h;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++){
		h=i;
		for(int j=i+1;j<n;j++){
			if(a[h]>a[j])h=j;
		}
		if(h!=i){
			p=a[i];a[i]=a[h];a[h]=p;
		}
		cout<<"Buoc "<<i+1<<":";
		for(int j=0;j<n;j++)cout<<' '<<a[j];
		cout<<"\n";
	}
	return 0;
}

