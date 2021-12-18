#include <bits/stdc++.h>
using namespace std;
int t,n,x,a[25];
vector< vector<int> > res;
void Try(int begin, int sum, vector<int> temp)
{
	if(sum==x){
		res.push_back(temp);
		return;
	}
	for(int i=begin;i<n;++i){
		if(sum+a[i]<=x){
			temp.push_back(a[i]);
			Try(i,sum+a[i],temp);
			temp.pop_back();
		}
		else break;
	}
}
int main()
{
	cin>>t;
	while(t--){
		res.clear();
		cin>>n>>x;
		for(int i=0;i<n;++i)cin>>a[i];
		//sort(a,a+n);
		vector<int> temp;
		Try(0,0,temp);
		if(res.size()==0)cout<<"-1\n";
		else {
			//cout<<res.size()<<' ';
			for(int i=0;i<res.size();++i){
				cout<<"[";
				for(int j=0;j<res[i].size();++j){
					if(j==res[i].size()-1)cout<<res[i][j]<<"]";
					else cout<<res[i][j]<<' ';
				}
				cout<<' ';
			}
			cout<<"\n";
		}
	}
	return 0;
}

