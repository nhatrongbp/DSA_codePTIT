#include <iostream>

using namespace std;
int mod=1e9+7;
struct Matrix
{
    long long m[10][10];
    int rank;
};
Matrix operator *(Matrix a, Matrix b)
{
	Matrix c;c.rank=a.rank;
    for(int i=0;i<a.rank;i++){
        for(int j=0;j<a.rank;j++){
            c.m[i][j]=0;
            for(int k=0;k<a.rank;k++)c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j]%mod))%mod;
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
        int n;long long k;
        cin >> n>>k;
        Matrix f;
        f.rank=n;
        for(int i=0;i<n;++i){
        	for(int j=0;j<n;++j)cin>>f.m[i][j];
		}
        Matrix ans=powerMatrix(f,k);
        for(int i=0;i<n;++i){
        	for(int j=0;j<n;++j)cout<<ans.m[i][j]<<' ';
        	cout<<"\n";
		}
    }
    return 0;
}

