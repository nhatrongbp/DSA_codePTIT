#include <bits/stdc++.h>
using namespace std;
short t,r,i,j,n,h[15];
bool haha()
{
	for(j=1;j<n;++j){
		if(h[j]==1&&h[j+1]==1)return false;
	}
	return true;
}
void hahaa()
{
	cout<<"HA";
	for(j=1;j<=n;++j){
		if(h[j])cout<<"H";
		else cout<<"A";
	}
	cout<<"A\n";
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		if(n==2){
			cout<<"HA\n";
			continue;
		}
		if(n==3){
			cout<<"HAA\n";
			continue;
		}
		n=n-3;r=pow(2,n);
		memset(h,0,sizeof(h));
		if(haha())hahaa();
		for(i=1;i<r;++i){
			for(j=n;j>0;--j){
				if(h[j]==0){
					h[j]=1;break;
				}
				else h[j]=0;
			}
			if(haha())hahaa();
		}
	}
	return 0;
}

