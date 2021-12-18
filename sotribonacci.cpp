#include<bits/stdc++.h>
using namespace std;
long long M = 1e15+7;

struct Matran{
	long long f[4][4];
};

long long multiply(long long a, long long b)
{
	if(b == 0) return 0;
	long long x = multiply(a, b/2) % M;
	if(b & 1)return (x * 2 % M + a) % M;
	else return x * 2 % M;
}

Matran operator *(Matran A, Matran B){
	Matran C;
	int i, j, k; 
	for(i = 0; i <= 3; i++)
		for(j = 0; j <= 3; j++){
			C.f[i][j] = 0;
			for(k = 0; k <= 3; k++)
				C.f[i][j] = ( C.f[i][j] + multiply(A.f[i][k] % M, B.f[k][j] % M) ) %M;
		}
	return C;
}
Matran powerM(Matran A, int n){
	if(n == 1) return A;
	Matran x = powerM(A, n/2);
	if(n % 2 == 0)return x*x;
	return x*x*A;
}
int main(){
	int t; long long n;
	Matran A,T; cin >> t;
	while(t--){
		cin>>n;
		if(n <= 1){
			cout << n << endl;
			continue;
		}
		if(n == 2){
			cout << "3" << endl;
			continue;
		}
		if(n == 3){
			cout << "6" << endl;
			continue;
		}
		T.f[0][0] = 1; T.f[0][1] = 1; T.f[0][2] = 1; T.f[0][3] = 1;
		T.f[1][0] = 0; T.f[1][1] = 1; T.f[1][2] = 1; T.f[1][3] = 1;
		T.f[2][0] = 0; T.f[2][1] = 1; T.f[2][2] = 0; T.f[2][3] = 0;
		T.f[3][0] = 0; T.f[3][1] = 0; T.f[3][2] = 1; T.f[3][3] = 0;
		
		A.f[0][0] = 6; A.f[0][1] = 0; A.f[0][2] = 0; A.f[0][3] = 0;
		A.f[1][0] = 3; A.f[1][1] = 0; A.f[1][2] = 0; A.f[1][3] = 0;
		A.f[2][0] = 2; A.f[2][1] = 0; A.f[2][2] = 0; A.f[2][3] = 0;
		A.f[3][0] = 1; A.f[3][1] = 0; A.f[3][2] = 0; A.f[3][3] = 0;
		Matran KQ = powerM(T,n-3)*A;
		cout << KQ.f[0][0] << endl;
	}
	return 0;
}
