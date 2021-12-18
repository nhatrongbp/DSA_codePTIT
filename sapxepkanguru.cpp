#include <bits/stdc++.h>
using namespace std;
int t,n;

int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; ++i)cin >> a[i];
		sort(a.begin(), a.end());
		int k=0;
		for(int i=n/2-1, j=n-1; j>=n/2, i>=0;){
			if(a[j] >= 2*a[i]){
				k++;i--;j--;
			}
			else i--;
		}
		cout<<n-k<<'\n';
	}
	return 0;
}


