#include <bits/stdc++.h>
using namespace std;
int n, a[1000005];
int res;
struct Node{
	int val;
	Node *l,*r;
	Node(int v){
		val=v;
		l=r=NULL;
	}
};
void binary(int l,int r)
{
	//cout<<l<<' '<<r<<endl;
	if(l>r){
		//cout<<"l>r\n";
		return;
	}
	if(l==r){
		//cout<<"l=r push "<<a[l]<<endl;
		//cout<<a[l]<<' ';
		++res;
	}
	else{
		int m=(r+l)/2;//cout<<"m="<<m<<" push "<<a[m]<<endl;
		//cout<<a[m]<<' ';
		binary(l,m-1);
		binary(m+1,r);
		//cout<<a[m]<<' ';
	}
}
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);res=0;
		binary(0,n-1);
		cout<<res<<'\n';
	}
	return 0;
}


