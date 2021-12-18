#include <bits/stdc++.h>
using namespace std;
const int maxN = 1005;
int p[maxN];

int root(int v) {
	if(p[v] < 0) return v;
	return (p[v] = root(p[v]));
}

void merge(int x, int y) {
    if ((x = root(x)) == (y = root(y))) return;
    if (p[y] < p[x]) swap(x, y);
    p[x] += p[y];
    p[y] = x;
}

string cycle()
{
	int v, e;
	cin >> v >> e;
	memset(p, -1, sizeof(p));
	int a[2*e+5];
	for(int i=0; i<2*e; i++)cin>>a[i];
	for(int i=0; i<2*e; i+=2){
		int x = a[i], y = a[i+1];
		if(root(x) == root(y)) return "YES\n";
		merge(x, y);
	}
	return "NO\n";
}
int main(){
	int t;cin>>t;
	while(t--)cout<<cycle();
	return 0;
}
