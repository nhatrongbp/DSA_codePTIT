#include <bits/stdc++.h>
using namespace std;
int s,t,n,a[205];
bool dp[205][40005];//mang con tinh tu dau den vi tri i lieu co tach ra duoc thanh tong=j hay khong
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			//s+=a[i];
			dp[i][0]=true;//tong=0 thi chac chan tao ra duoc bat ke chon phan tu nao
		}
		sort(a+1,a+n+1);
		dp[0][0]=true;
		for(int i=1;i<=s;++i)dp[0][i]=false;//neu ko chon phan tu nao thi ko the tao ra tong>0 duoc
		for(int i=1;i<=n;++i){
			for(int j=1;j<=s;++j){
				if(a[i]<=j){
					dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i]];
							//ko chon || chon
				}
				else dp[i][j]=dp[i-1][j];//phan tu do lon hon ca tong nen khong chon
			}
		}
		/*for(int i=0;i<=n;++i){
			for(int j=0;j<=s/2;++j)cout<<dp[i][j]<<' ';
			cout<<endl;
		}*/
		if(dp[n][s])cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
