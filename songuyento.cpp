#include <bits/stdc++.h>
using namespace std;
int t,n,p,s,a[15];
bool prime[200];
vector < vector<int> > res;
void Try(int i,int sum)
{
	for(int j=a[i-1]+1;j<=s-sum;++j){
		if(prime[j]){
			a[i]=j;
			if(i==n&&sum+j==s){
				vector<int> temp;
				for(int k=1;k<=n;++k)temp.push_back(a[k]);
				res.push_back(temp);
				return;
			}
			else Try(i+1,sum+j);
		}
	}
}
int main()
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;prime[1]=false;
	for(int i=2;i<200;++i){
		if(prime[i]){
			for(int j=2*i;j<200;j+=i)prime[j]=false;
		}
	}
	cin>>t;
	while(t--){
		cin>>n>>p>>s;
		a[0]=p;
		res.clear();
		Try(1,0);
		cout<<res.size()<<"\n";
		for(int i=0;i<res.size();++i){
			for(int j=0;j<res[i].size();++j)cout<<res[i][j]<<' ';
			cout<<"\n";
		}
	}
	return 0;
}

