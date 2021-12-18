#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		memset(h,0,sizeof(h));
		cin>>h[92001];h[92004]=h[92001];h[h[92004]]=1;
		for(i=1;i<n;++i){
			cin>>r;++h[r];
			h[92001]=max(h[92001],r);
			h[92004]=min(h[92004],r);
		}
		r=0;
		for(i=h[92004];i<=h[92001];++i){
			if(!h[i])++r;
		}
		cout<<r<<"\n";
	}
	return 0;
}

