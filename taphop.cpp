#include <bits/stdc++.h>
using namespace std;
int n,k,s,re[15],ans;
bool number[30];
void Try(int i, int sum)
{
	for(int j=re[i-1]+1;j<=n;++j){
		if(number[j]&&sum+j<=s){
			number[j]=false;
			re[i]=j;
			if(i==k&&sum+j==s)++ans;
			if(i<k&&sum+j<s)Try(i+1,sum+j);
			number[j]=true;
		}
	}
}
int main()
{
	while(cin>>n>>k>>s){
		if(n==0&&k==s&&s==0)break;
		ans=0;
		memset(number,true,sizeof(number));
		re[0]=0;
		Try(1,0);
		cout<<ans<<"\n";
	}
	return 0;
}

