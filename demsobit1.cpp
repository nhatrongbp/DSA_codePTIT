#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
level 1 return luon
level 2: node giua la node 2
level 3: node giua la node 4
level 4: node giua la node 8
...
level n: node giua la node 2^(n-1)

1 level: toi da 1 node la
2 level: toi da 3 node la
3 level: toi da 7 node la
4 level: toi da 15 node la
...
n level: toi da 2^n - 1 node la
*/
int countLevel(ll n)
{
	int lev = 0;
	while(n){
		n /= 2;
		++lev;
	}
	return lev;
}

int findLeaf(ll pos, int lev, ll node)
{
	if(lev == 1) return node;
	ll mid = (1LL<<(lev-1));
	if(pos == mid) return node%2;
	if(pos > mid) pos -= mid;
	return findLeaf(pos, lev-1, node/2);
}

int main()
{
	int t; cin>>t;
	while(t--){
		ll n, l, r;
		cin >> n >> l >> r;
		int level = countLevel(n);
		ll res = 0;
		for(ll i = l; i <= r; ++i){
			if(i >= (1LL<<level)) break;
			if(findLeaf(i, level, n)) ++res;
		}
		cout<<res<<'\n';
	}
	return 0;
}


