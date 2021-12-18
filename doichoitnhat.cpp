/*#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,h,size;
bool check[1005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		pair<int,int> a[n];
		for(i=0;i<n;++i){
			cin>>a[i].first;
			a[i].second=i;
		}
		sort(a,a+n);
		//for(i=0;i<n;++i)cout<<a[i].first<<' ';cout<<endl;
		//for(i=0;i<n;++i)cout<<a[i].second<<' ';cout<<endl;
		r=0;
		memset(check,true,sizeof(check));
		for(i=0;i<n;++i){
			if(!check[i]||a[i].second==i)continue;//neu dinh do da di qua hoac dinh do dung vi tri
			//neu dinh do chua di qua va dang dung sai vi tri
			size=0;h=i;
			while(check[h]){
				check[h]=false;//danh dau la da di
				h=a[h].second;//di sang dinh tiep theo
				++size;
			}
			if(size>0)r=r+size-1;
		}
		cout<<r<<"\n";
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
//doi cho phan tu nho nhat len dau 
//roi den phan tu nho nhat thu 2 
//dan dan nhu vay
int t,r,a,m,x,i,n,h[2005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;r=0;
		for(i=0;i<n;++i) cin>>h[i];
		for(i=0;i<n;++i){
			m=i;//idx of min
			for(x=i+1;x<n;x++) if(h[x]<h[m]) m=x;
			if(m!=i){
				swap(h[i],h[m]);
				++r;
			}
		}
		cout<<r<<"\n";
	}
}
