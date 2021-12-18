#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,left_[100005],right_[100005],a[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;++i)cin>>a[i];
		stack<int> s;
		s.push(0);
		for(i=1;i<n;++i){
			while(!s.empty()&&a[i]<a[s.top()]){
				right_[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			right_[s.top()]=n;
			s.pop();
		}
		/*for(i=0;i<n;++i)cout<<i<<' ';
		cout<<"\n";
		for(i=0;i<n;++i)cout<<right_[i]<<' ';
		cout<<"\n";*/
		s.push(n-1);
		for(i=n-2;i>=0;--i){
			while(!s.empty()&&a[i]<a[s.top()]){
				left_[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			left_[s.top()]=-1;
			s.pop();
		}
		/*for(i=0;i<n;++i)cout<<left_[i]<<' ';
		cout<<"\n";*/
		long long loong=a[0];
		for(i=0;i<n;++i){
			loong=max(loong,(long long)a[i]*(right_[i]-left_[i]-1));
		}
		cout<<loong<<"\n";
	}
	return 0;
}

