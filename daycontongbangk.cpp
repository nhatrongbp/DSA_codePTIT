#include <bits/stdc++.h>
using namespace std;
int t,n,k,a[15],res[15];
bool bull[15];
void Try(int begin, int sum, int id)
{
	if(sum==k){
		bull[14]=false;
		for (int i = 0; i < id; ++i) { 
 		if (i == 0) cout << "["; 
		if (i == id-1) cout << res[i] << "]";
		else cout << res[i] <<" " ;
	} 
	cout << " ";
	}
	for(int i=begin;i<n;++i){
		if(a[i]>k-sum)break;
		if(bull[i]&&a[i]<=k-sum){
			bull[i]=false;
			res[id]=a[i];
			Try(i,sum+a[i],id+1);
			bull[i]=true;
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		memset(bull,true,sizeof(bull));
		Try(0,0,0);
		if(bull[14])cout<<-1;
		cout<<"\n";
	}
	return 0;
}
