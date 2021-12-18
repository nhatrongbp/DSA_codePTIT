#include <bits/stdc++.h>
using namespace std;
int res,t,temp,row,col,l[505],r[505],a[505];
int histogram()
{
	stack<int> st;
	//right
	st.push(0);
	for(int i=1;i<col;++i){
		while(!st.empty()&&a[st.top()]>a[i]){
			r[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		r[st.top()]=col;
		st.pop();
	}
	//left
	st.push(col-1);
	for(int i=col-2;i>=0;--i){
		while(!st.empty()&&a[st.top()]>a[i]){
			l[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		l[st.top()]=-1;
		st.pop();
	}
	int ans=0;
	for(int i=0;i<col;++i){
		if(a[i])ans=max(ans,a[i]*(r[i]-l[i]-1));
	}
	return ans;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>row>>col;res=0;
		for(int i=0;i<row;++i){
			for(int j=0;j<col;++j){
				cin>>temp;
				if(i==0)a[j]=temp;
				else {
					if(temp==0)a[j]=0;
					else a[j]+=temp;
				}
			}
			res=max(res,histogram());
		}
		cout<<res<<"\n";
	}
	return 0;
}
