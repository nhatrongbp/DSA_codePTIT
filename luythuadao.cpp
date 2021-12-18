#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long reversell(long long n)
{
    long long r=0;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
long long power(long long n, long long r)
{
    if(r==1)return n%m;
    long long x=power(n,r/2);
    if(r%2==0)return x*x%m;
    return n*(x*x%m)%m;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,r;
        cin >> n;
        r=reversell(n);
        cout << power(n,r) << endl;
    }
    return 0;
}

