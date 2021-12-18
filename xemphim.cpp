#include <bits/stdc++.h>
using namespace std;
int n,c,cow[105];
int a[105][25005]={0};
int main()
{
    cin>>c>>n;
    for(int i=1;i<=n;i++)cin>>cow[i];
    for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
	    	if(cow[i]>j)a[i][j]=a[i-1][j];//cow[i] nang > j kg thi ko chon
	    	else a[i][j]=max(a[i-1][j],a[i-1][j-cow[i]]+cow[i]);
	    	//ko chon hoac chon nhung nho phai chua cho cho no
		}
    }
    cout<<a[n][c]<<endl;
    return 0;
}
