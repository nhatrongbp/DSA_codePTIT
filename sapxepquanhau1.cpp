#include <bits/stdc++.h>
using namespace std;
int t,n,k;
bool len[25],xuo[25],doc[15];
void Try(int i)//hang thu i
{
	for(int j=1;j<=n;++j){//cot thu j
		if(doc[j]&&len[i-j+n]&&xuo[i+j-1]){
			doc[j]=false;
			len[i-j+n]=false;
			xuo[i+j-1]=false;
			if(i==n)++k;//hang thu n da tim duoc cho
			else Try(i+1);//hang tiep theo
			doc[j]=true;
			len[i-j+n]=true;
			xuo[i+j-1]=true;
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;k=0;
		memset(len,true,sizeof(len));
		memset(xuo,true,sizeof(xuo));
		memset(doc,true,sizeof(doc));
		Try(1);
		cout<<k<<"\n";
	}
	return 0;
}

