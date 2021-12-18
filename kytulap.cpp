#include <bits/stdc++.h>
using namespace std;
int n,res,sum;
int cmin;
int a[15];
int c[15][15];
bool b[15];
string s[15];
int cal(string s1, string s2)
{
	int i=0,j=0,cnt=0;
	while(i<s1.length()&&j<s2.length()){
		if(s1[i]==s2[j]){
			++i;++j;++cnt;
		}
		else if(s1[i]<s2[j])++i;
		else ++j;
	}
	return cnt;
}
void Try(int i)
{
	int j;
	for(j=1;j<=n;++j){
		if(b[j]){
			a[i]=j;
			b[j]=false;
			sum=sum+c[a[i-1]][a[i]];
			if(i==n)res=min(res,sum);
			else if(sum+(n-i)*cmin<res)Try(i+1);
			sum=sum-c[a[i-1]][a[i]];
			b[j]=true;
		}
	}
}
int main()
{
	//init
	cin>>n;res=234;//9*26
	for(int i=1;i<=n;++i)cin>>s[i];
	cmin=26;
	for(int i=1;i<=n;++i){
		for(int j=i+1;j<=n;++j){
			c[i][j]=cal(s[i],s[j]);
			cmin=min(cmin,c[i][j]);
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<i;++j){
			c[i][j]=c[j][i];
		}
	}
	/*for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j)cout<<c[i][j]<<' ';
		cout<<endl;
	}*/
	for(int i=1;i<=n;++i){
		sum=0;a[1]=i;
		memset(b,true,sizeof(b));
		b[i]=false;
		Try(2);
	}
	cout<<res;
	return 0;
}
