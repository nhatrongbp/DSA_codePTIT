#include <bits/stdc++.h>
using namespace std;
int t,n,m,k;
long long a[1000005],b[1000005],c[1000005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		for(int i=0;i<n;++i)cin>>a[i];
		for(int i=0;i<m;++i)cin>>b[i];
		for(int i=0;i<k;++i)cin>>c[i];
		int ia=0,ib=0,ic=0;
		bool bull=true;
		set<long long> s;
		while(ia<n&&ib<m&&ic<k){
			if(a[ia]==b[ib]&&b[ib]==c[ic]){
				bull=false;
				//cout<<a[ia]<<' ';
				s.insert(a[ia]);
				++ia;++ib;++ic;
			}
			else if(a[ia]<b[ib])++ia;
			else if(b[ib]<c[ic])++ib;
			else ++ic;
		}
		if(bull)cout<<"-1";
		for(set<long long>::iterator it=s.begin();it!=s.end();++it){
			cout<<*it<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

