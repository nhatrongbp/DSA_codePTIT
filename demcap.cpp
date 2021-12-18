#include <bits/stdc++.h>
using namespace std;
int t,r,i,j,n,m,x[100005],y[100005],a[5];
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>m;r=0;
		memset(a,0,sizeof(a));
		for(i=0;i<n;++i)cin>>x[i];
		for(j=0;j<m;++j){
			cin>>y[j];
			if(y[j]<5)++a[y[j]];
		}
		sort(y,y+m);
		for(i=0;i<n;++i){
			if(x[i]==0)r=r;
			else if(x[i]==1)r+=a[0];
			else {
				r=r+a[0]+a[1];
				if(x[i]==3)r+=a[2];
				if(x[i]==2)r=r-a[3]-a[4];
				int k = upper_bound(y+0,y+m,x[i])-y;
				r+=m-k;
			}
		}
		cout<<r<<"\n";
	}
	return 0;
}/*
x\y	0	1	2	3	4	5	6	7
0		f	f	f	f	f	f	f
1	t	f	f	f	f	f	f	f
2	t	t	f	f	f	t	t	t
3	t	t	t	f	t	t	t	t
4	t	t	f	f	f	t	t	t
5	t	t	f	f	f	f	t	t
6	t	t	f	f	f	f	f	t
7	t	t	f	f	f	f	f	f
x=0 f
x=1 & y=0 t
x>1 & y=1or1 t
x=2 & y=3or4 f
x=3 & y=2 t
else
x<y t
x>=y f*/
