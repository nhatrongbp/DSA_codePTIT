#include <bits/stdc++.h>
using namespace std;
int n,k,a[10][10],b[10];
bool col[10];
vector < vector<int> > res;
void Try(int i, int s)
{
	for(int j=0;j<n;++j){
		if(col[j]&&s+a[i][j]<=k){
			col[j]=false;
			b[i]=j+1;
			if(i==n-1&&s+a[i][j]==k){
				vector<int> temp;
				for(int k=0;k<n;++k)temp.push_back(b[k]);
				res.push_back(temp);
			}
			if(i!=n-1)Try(i+1,s+a[i][j]);
			col[j]=true;
		}
	}
}

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;++i){
		col[i]=true;
		for(int j=0;j<n;++j)cin>>a[i][j];
	}
	Try(0,0);
	cout<<res.size()<<"\n";
	for(int i=0;i<res.size();++i){
		for(int j=0;j<res[i].size();++j)cout<<res[i][j]<<' ';
		cout<<"\n";
	}
	return 0;
}

