#include <bits/stdc++.h>
using namespace std;
int t,n,l,r,a[55];
string vtr()
{
	if(n==1)return "Yes";
	l=min(a[0],a[n-1]);r=max(a[0],a[n-1]);
	for(int i=1;i<n/2;i++){
		if(min(a[i],a[n-i-1])<l||max(a[i],a[n-i-1])>r)return "No";
		else {
			l=min(a[i],a[n-i-1]);
			r=max(a[i],a[n-i-1]);
		}
	}
	return "Yes";
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];
		cout<<vtr()<<"\n";
	}
	return 0;
}

