#include <bits/stdc++.h>
using namespace std;
int n,k,a[20],s;
int dp[20][20];
bool visit[20][20];
int Try(int i,int ck,int cursum)
{
	//truong hop suy bien
	if(i==n&&ck<k+1)return 0;
	if(i!=n&&ck==k+1)return 0;
	if(i==n&&ck==k+1)return 1;
	//bai toan da tinh roi khong tinh lai
	if(visit[i][ck])return dp[i][ck];
	//giai bai toan:
	//danh dau la da giai
	visit[i][ck]=true;
	dp[i][ck]=Try(i+1,ck,cursum+a[i]);
	if(cursum+a[i]==(s/k)*ck){
		dp[i][ck]+=Try(i+1,ck+1,cursum+a[i]);
	}
	return dp[i][ck];
}
int main()
{
	cin>>n>>k;s=0;
	memset(visit,false,sizeof(visit));
	for(int i=0;i<n;++i){
		cin>>a[i];s+=a[i];
	}
	if(s%k!=0)cout<<0;
	else cout<<Try(0,1,0);
	return 0;
}

