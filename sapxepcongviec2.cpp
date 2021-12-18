#include <bits/stdc++.h>
using namespace std;
bool actcmp(pair<int,int> x, pair<int,int> y)
{
	if(x.first!=y.first)return x.first>y.first;
	else return x.second>=y.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,id;
		cin>>n;
		bool bull[n+1];
		pair<int,int> p[n];
		for(int i=0;i<n;++i){
			cin>>id>>p[i].second>>p[i].first;
			bull[i+1]=true;
		}
		sort(p,p+n,actcmp);
		/*
		for(int i=0;i<n;++i){
			cout<<p[i].second<<' '<<p[i].first<<endl;
		}*/
		int act=0,ben=0;
		for(int i=0;i<n;++i){
			for(int j=min(p[i].second,n);j>0;--j){
				if(bull[j]){
					bull[j]=false;
					++act;
					ben=ben+p[i].first;
					/*cout<<"chon viec co loi nhuan "<<p[i].first<<endl;
					cout<<"so cong viec hien tai "<<act<<endl;
					cout<<"tong loi nhuan hien tai "<<ben<<endl;*/
					break;
				}
				/*else{
					cout<<"KHONG chon viec co loi nhuan "<<p[i].first<<endl;
					cout<<"so cong viec hien tai "<<act<<endl;
					cout<<"tong loi nhuan hien tai "<<ben<<endl;
				}*/
			}
		}
		cout<<act<<' '<<ben<<"\n";
	}
	return 0;
}

