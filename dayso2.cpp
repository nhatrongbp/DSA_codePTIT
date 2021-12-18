#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n) { 
	for (int i = 0; i < n; ++i) { 
 		if (i == 0) cout << "["; 
		if (i == n-1) cout << a[i] << "]";
		else cout << a[i] <<" " ;
	} 
	cout << " ";
}
int main()
{
	int t,n,a[15][15];cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[0][i];
		for(int i=1;i<n;++i){
			for(int j=0;j<n-i;++j)a[i][j]=a[i-1][j]+a[i-1][j+1];
		}
		for(int i=n-1;i>=0;--i)in(a[i],n-i);
		cout<<"\n";
	}
	return 0;
}
