#include <bits/stdc++.h>
using namespace std;
void printline(short a[],short n)
{
	if(n%2==0){
		for(int i=1;i<=n/2;++i)cout<<a[i]<<' ';
		for(int i=n/2;i>0;--i)cout<<a[i]<<' ';
	}
	else{
		for(int i=1;i<=n/2;++i)cout<<a[i]<<' ';
		cout<<"0 ";
		for(int i=n/2;i>0;--i)cout<<a[i]<<' ';
		cout<<"\n";
		for(int i=1;i<=n/2;++i)cout<<a[i]<<' ';
		cout<<"1 ";
		for(int i=n/2;i>0;--i)cout<<a[i]<<' ';
	}
	cout<<"\n";
}
int main()
{
	short n[10005]={0};
	cin>>n[0];
	printline(n,n[0]);
	for(int i=1;i<pow(2,n[0]/2);++i){
		for(int j=n[0]/2;j>0;--j){
			if(n[j]==0){
				n[j]=1;break;
			}
			else n[j]=0;
		}
		printline(n,n[0]);
	}
	return 0;
}


