#include <bits/stdc++.h>
using namespace std;
int n,res,sum;
int cmin;
int a[25];
int c[25][25];
bool b[25];

void Try(int i)
{
	int j;
	for(j=2;j<=n;++j){
		if(b[j]){
			a[i]=j;
			b[j]=false;
			sum=sum+c[a[i-1]][a[i]];
			if(i==n)res=min(res,sum+c[a[i]][a[1]]);
			else if(sum+(n-i)*cmin<res)Try(i+1);
			sum=sum-c[a[i-1]][a[i]];
			b[j]=true;
		}
	}
}
int main()
{
	//init
	cin>>n;
	res=1e9+7;
	cmin=1e9+7;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>c[i][j];
			cmin=min(cmin,c[i][j]);
		}
	}
	//branch and bound
	sum=0;a[1]=1;
	memset(b,true,sizeof(b));
	//b[i]=false;
	Try(2);
	cout<<res;
	return 0;
}
