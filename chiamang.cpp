#include <bits/stdc++.h>
using namespace std;
int t,n,k,sum,a[25],p[25];
bool visit[25];
bool Try(int idp)
{
	if(p[idp]==sum/k){
		if(idp==k-2)return true;
		else return Try(idp+1);
	}
	for(int i=n-1;i>=0;--i){
		if(visit[i]&&p[idp]+a[i]<=sum/k){
			visit[i]=false;
			p[idp]+=a[i];
			bool next=Try(idp);
			visit[i]=true;
			p[idp]-=a[i];
			if(next)return true;
		}
	}
	return false;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>k;sum=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%k!=0||n<k){
			cout<<"0\n";
			continue;
		}
		if(k==0){
			cout<<"0\n";
			continue;
		}
		if(k==1){
			cout<<"1\n";
			continue;
		}
		//int p[k]={0};
		memset(visit,true,sizeof(visit));
		memset(p,0,sizeof(p));
		p[0]=a[0];
		visit[0]=false;
		cout<<Try(0)<<"\n";
	}
	return 0;
}

