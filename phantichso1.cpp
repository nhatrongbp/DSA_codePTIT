#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,a[15];
	cin>>t;
	while(t--){
		cin>>n;
		int right=1;
		cout<<"("<<n<<")";
		a[1]=n;
		while(true){
			int left=right;
			for(i=right;i>0;--i){
				if(a[i]!=1){
					left=i;
					break;
				}
			}
			if(i==0)break;
			--a[left];
			int sum=right-left+1;
			for(i=left+1;sum>=0;++i){
				if(sum>=a[left]){
					a[i]=a[left];
					sum-=a[left];
				}
				else if(sum>0){
					a[i]=sum;
					right=i;
					break;
				}
				else {
					right=i-1;
					break;
				}
			}
			cout<<" ";
			for(i=1;i<=right;++i){
				if(i==1)cout<<"("<<a[i];
				else cout<<" "<<a[i];
				if(i==right)cout<<")";
			}
		}
		cout<<"\n";
	}
	return 0;
}

