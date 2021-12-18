#include <bits/stdc++.h>
using namespace std;

int main()
{
	short n;cin>>n;
	short p,a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				p=a[i];a[i]=a[j];a[j]=p;
			}
		}
		cout<<"Buoc "<<i+1<<":";
		for(int j=0;j<n;j++)cout<<' '<<a[j];
		cout<<"\n";
	}
	return 0;
}

