#include <bits/stdc++.h>
using namespace std;
int a[15][15],res[25],t,n;
bool bull;
void Try(int x,int y,int z)
{
	if(x==n-1&&y==n-1){
		bull=false;
		for(int i=0;i<2*(n-1);++i){
			if(res[i])cout<<'D';
			else cout<<'R';
		}
		cout<<' ';
	}
	if(x+1<n&&a[x+1][y]){
		res[z]=1;
		Try(x+1,y,z+1);
	}
	if(y+1<n&&a[x][y+1]){
		res[z]=0;
		Try(x,y+1,z+1);
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin>>a[i][j];
			}
		}
		if(a[0][0]==0){
			cout<<-1<<"\n";
			continue;
		}
		bull=true;
		Try(0,0,0);
		if(bull)cout<<-1;
		cout<<"\n";
	}
	return 0;
}

