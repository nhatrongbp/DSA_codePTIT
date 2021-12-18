/*#include <bits/stdc++.h>
using namespace std;
vector <long long> a;
long long res;
void merge(int l,int m,int r)
{
	vector<long long> L,R;
	for(int i=l;i<=r;++i){
		if(i<=m)L.push_back(a[i]);
		else R.push_back(a[i]);
	}
	int i=0,j=0,k=l;
	while(i<L.size()&&j<R.size()){
		if(L[i]<=R[j]){
			a[k++]=L[i++];
		}
		else {
			a[k++]=R[j++];
			res+=L.size()-i;
		}
	}
	while(i<L.size())a[k++]=L[i++];
	while(j<R.size())a[k++]=R[j++];
}
void merge_sort(int l,int r)
{
	if(l<r){
		int m=(l+r)/2;
		merge_sort(l,m);
		merge_sort(m+1,r);
		merge(l,m,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;a.clear();
		for(int i=0;i<n;++i){
			cin>>res;
			a.push_back(res);
		}
		res=0;
		merge_sort(0,n-1);
		cout<<res<<"\n";
	}
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
const int maxN=1e5+5;
int n,id[maxN];
int a[maxN];
map<int,int> m;
void updateBIT(int i)//i - i&(-i)
{
	for(;i<=1e5;i+=i&(-i))m[i]++;
}
int getBIT(int i)//i + i&(-i)
{
	int res=0;
	for(;i>=1;i-=i&(-i))res+=m[i];
	return res;
}
bool idxcmp(int i,int j){
	if(a[i]!=a[j])return a[i]>a[j];
	return i<j;
}
int main()
{
	//int t;cin>>t;
	//while(t--){
		cin>>n;
		m.clear();
		for(int i=1;i<=n;++i){
			cin>>a[i];
			id[i]=i;
		}
		sort(id+1,id+n+1,idxcmp);
		//for(int i=1;i<=n;++i)cout<<id[i]<<' ';
		//cout<<endl;
		long long res=0;
		for(int i=1;i<=n;++i){
			res+=getBIT(id[i]);
			updateBIT(id[i]);
		}
		cout<<res;//<<"\n";
	//}
	return 0;
}
