#include <iostream>

using namespace std;
int m=1e9+7;
struct Matrix
{
    long long m[2][2];
};
Matrix operator *(Matrix a, Matrix b)
{
    Matrix c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c.m[i][j]=0;
            for(int k=0;k<2;k++)c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j]%m))%m;
        }
    }
    return c;
}
Matrix powerMatrix(Matrix f, long long n)
{
    if(n==1)return f;
    Matrix x = powerMatrix(f,n/2);
    if(n%2==0)return x*x;
    return f*x*x;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        Matrix f;
        f.m[0][0]=1;f.m[0][1]=1;
        f.m[1][0]=1;f.m[1][1]=0;
        Matrix ans=powerMatrix(f,n);
        cout << ans.m[0][1] << endl;
    }
    return 0;
}

