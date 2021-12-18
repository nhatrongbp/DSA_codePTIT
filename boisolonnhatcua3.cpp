#include <bits/stdc++.h>
using namespace std;
int t,temp,sum,n,a[15];
void solve()
{
	for(int i=9;i>=0;--i){
		while(a[i]--)cout<<i;
	}
	cout<<"\n";
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;sum=0;
		memset(a,0,sizeof(a));
		bool found=false;
		for(int i=0;i<n;++i){
			cin>>temp;
			sum+=temp;
			++a[temp];
		}
		if(sum%3==0){
			solve();
			continue;
		}
		else if(sum%3==1){
			//xoa 1 digit du 1
			for(int i=1;i<=7;i+=3){
				if(a[i]>0){
					--a[i];solve();found=true;break;
				}
			}
			//xoa 2 digit du 2
			int cnt=0;
			for(int i=2;i<=8;i+=3){
				while(a[i]>0&&cnt<2){
					--a[i];++cnt;--n;
				}
				if(cnt==2&&n>0){
					solve();found=true;break;
				}
			}
		}
		else if(sum%3==2){
			//xoa 1 digit du 2
			for(int i=2;i<=8;i+=3){
				if(a[i]>0){
					--a[i];solve();found=true;break;
				}
			}
			//xoa 2 digit du 1
			int cnt=0;
			for(int i=1;i<=7;i+=3){
				while(a[i]>0&&cnt<2){
					--a[i];++cnt;--n;
				}
				if(cnt==2&&n>0){
					solve();found=true;break;
				}
			}
		}
		if(!found)cout<<"-1\n";
	}
	return 0;
}

