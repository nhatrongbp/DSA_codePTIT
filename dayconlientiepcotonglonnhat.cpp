#include <bits/stdc++.h>
using namespace std;
int t,n,inc,res,temp;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>res;
		inc=res;
		for(int i=1;i<n;++i){
			cin>>temp;
			if(inc>0)inc=inc+temp;//neu lam an duoc(>0) thi lam an tiep
			else inc=0+temp;//neu trang tay(=0) hay no nan(<0) thi tot nhat nen dau thai kiep moi
			res=max(res,inc);
		}
		cout<<res<<"\n";
	}
	return 0;
}

