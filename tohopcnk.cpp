#include <iostream>

using namespace std;
int m=1e9+7;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n+1][k+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(j==0||i==j)a[i][j]=1;
                else a[i][j]=(a[i-1][j]+a[i-1][j-1])%m;
                cout<<a[i][j]<<' ';
            }
            //cout<<endl;
        }
        //cout << a[n][k] << endl;
    }
    return 0;
}

