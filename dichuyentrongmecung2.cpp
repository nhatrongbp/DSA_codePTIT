#include <bits/stdc++.h>
using namespace std;
int a[15][15],t,n;
char res[1005];
bool bull,b[15][15];
void Try(int x,int y,int z)
{
	if(x==n-1&&y==n-1){
		bull=false;
		for(int i=0;i<z;++i){
			cout<<res[i];
		}
		cout<<' ';
	}
	if(x+1<n&&a[x+1][y]&&b[x+1][y]){
		res[z]='D';
		b[x+1][y]=false;
		Try(x+1,y,z+1);
		b[x+1][y]=true;
	}
	if(y-1>=0&&a[x][y-1]&&b[x][y-1]){
		res[z]='L';
		b[x][y-1]=false;
		Try(x,y-1,z+1);
		b[x][y-1]=true;
	}
	if(y+1<n&&a[x][y+1]&&b[x][y+1]){
		res[z]='R';
		b[x][y+1]=false;
		Try(x,y+1,z+1);
		b[x][y+1]=true;
	}
	if(x-1>=0&&a[x-1][y]&&b[x-1][y]){
		res[z]='U';
		b[x-1][y]=false;
		Try(x-1,y,z+1);
		b[x-1][y]=true;
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
				b[i][j]=true;
			}
		}
		if(a[0][0]==0){
			cout<<-1<<"\n";
			continue;
		}
		b[0][0]=false;
		bull=true;
		Try(0,0,0);
		if(bull)cout<<-1;
		cout<<"\n";
	}
	return 0;
}


