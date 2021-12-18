#include <bits/stdc++.h>
using namespace std;
int t,k,res,a[9][9];
bool len[25],xuo[25],doc[15];
void Try(int i)//hang thu i
{
	for(int j=1;j<=8;++j){//cot thu j
		if(doc[j]&&len[i-j+8]&&xuo[i+j-1]){
			doc[j]=false;
			len[i-j+8]=false;
			xuo[i+j-1]=false;
			k+=a[i][j];
			if(i==8)res=max(res,k);//hang thu n da tim duoc cho
			else Try(i+1);//hang tiep theo
			doc[j]=true;
			len[i-j+8]=true;
			xuo[i+j-1]=true;
			k-=a[i][j];
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		for(int i=1;i<=8;++i){
			for(int j=1;j<=8;++j)cin>>a[i][j];
		}
		memset(len,true,sizeof(len));
		memset(xuo,true,sizeof(xuo));
		memset(doc,true,sizeof(doc));
		res=0;k=0;
		Try(1);
		cout<<res<<"\n";
	}
	return 0;
}

