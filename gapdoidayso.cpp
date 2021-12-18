#include <bits/stdc++.h>
using namespace std;
/*
n n-1   array
1 0 	[1]                             so chinh giua o vi tri 1 = 2^0
2 1 	[1 2 1]                         so chinh giua o vi tri 2 = 2^1
3 2 	[1 2 1 3 1 2 1]                 so chinh giua o vi tri 4 = 2^2
4 3 	[1 2 1 3 1 2 1 4 1 2 1 3 1 2 1] so chinh giua o vi tri 8 = 2^3
...
n n-1   [... n ...]                     so chinh giua o vi tri 2^(n-1)
*/
int n;
long long k;
int divide(int n, long long k)
{
	/*cu chia doi dan sao cho k==vi tri chinh giua
	neu may man se tim ra som
	neu xui thi phai giam den n=1, khi do co dung 1 phan tu thi no la chinh giua luon*/
	long long x=pow(2,n-1);     //x la vi tri chinh giua
	if(x==k)return n;           //k la vi tri chinh giua, gia tri vi tri chinh giua == n
	if(x>k)return divide(n-1,k);//k o nua ben trai
	else return divide(n-1,k-x);//k o nua ben phai
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
		cout<<divide(n,k)<<"\n";
    }
    return 0;
}
