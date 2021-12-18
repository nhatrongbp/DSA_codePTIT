#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[15];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];cout<<'['<<a[0];
		for(int i=1;i<n;++i)cout<<' '<<a[i];cout<<"]\n";
		for(int i=1;i<n;++i){
			a[0]+=a[1];
			cout<<'['<<a[0];
			for(int j=1;j<n-i;++j){
				a[j]+=a[j+1];
				cout<<' '<<a[j];
			}
			cout<<"]\n";
		}
		cout<<"\n";
	}
	return 0;
}

