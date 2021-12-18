#include <bits/stdc++.h>
using namespace std;
int t,n,v,a[1005],c[1005];
int dp[1005][1005];//gia tri toi da khi dc phep chon tu do vat 0 den do vat i sao cho the tich khong vuot qua j
int main()
{
    cin >> t;
    while(t--)
    {
        cin>>n>>v;
        for(int i=0;i<n;++i)cin>>a[i];
        for(int i=0;i<n;++i)cin>>c[i];
        //khoi tao hang dau tien: chi chon moi do vat thu 0
        for(int j=0;j<=v;++j){
        	if(a[0]==j)dp[0][j]=c[0];//chon duoc do vat thu 0
        	else dp[0][j]=0;//ko chon duoc do vat thu 0
		}
		for(int i=1;i<n;++i){//kiem tra do vat thu 1 tro di
			for(int j=0;j<=v;++j){//kiem tra tat ca the tich
				//neu the tich vat i ko vuot qua j thi lua chon
				//giua ko chon vat i va chon vat i
				if(a[i]<=j)dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
				//the tich vat i vuot qua j thi ko chon
				else dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[n-1][v]<<"\n";
    }
    return 0;
}

