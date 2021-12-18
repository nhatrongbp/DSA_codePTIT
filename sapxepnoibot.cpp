#include <bits/stdc++.h>
using namespace std;

int main()
{
	short n;cin>>n;
	short p,a[n],h=0;
	bool bull=true;
	for(int i=0;i<n;i++)cin>>a[i];
	while(bull){
		bull=false;
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				p=a[i];a[i]=a[i+1];a[i+1]=p;
				bull=true;
			}
		}
		if(!bull)break;
		cout<<"Buoc "<<++h<<":";
		for(int j=0;j<n;j++)cout<<' '<<a[j];
		cout<<"\n";
	}
	return 0;
}

