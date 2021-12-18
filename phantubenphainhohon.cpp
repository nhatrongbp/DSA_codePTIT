#include <bits/stdc++.h>
using namespace std;
int t,r,i,n,bigger[100005],smaller[100005],a[100005];
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;++i)cin>>a[i];
		//right bigger
		stack<int> s;
		s.push(0);
		for(i=1;i<n;++i){
			while(!s.empty()&&a[i]>a[s.top()]){
				bigger[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			bigger[s.top()]=-1;
			s.pop();
		}
		//for(i=0;i<n;++i)cout<<bigger[i]<<' ';
		
		//right smaller
		s.push(0);
		for(i=1;i<n;++i){
			while(!s.empty()&&a[i]<a[s.top()]){
				smaller[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			smaller[s.top()]=-1;
			s.pop();
		}
		//for(i=0;i<n;++i)cout<<smaller[i]<<' ';
		for(i=0;i<n;++i){
			int rightbiggeridx=bigger[i];
			if(rightbiggeridx==-1){
				cout<<-1<<' ';
				continue;
			}
			int rightsmalleridx=smaller[rightbiggeridx];
			if(rightsmalleridx==-1){
				cout<<-1<<' ';
				continue;
			}
			cout<<a[rightsmalleridx]<<' ';
		}
		cout<<"\n";
	}
	return 0;
}

/*
ele		idx		right bigger	right smaller	idx of res	res
5		0		2				1				3			a[3]=2
1		1		2				-1				3			a[3]=2
9		2		-1				3				-1			-1
2		3		4				5				5			a[5]=1
5		4		6				5				-1			-1
1		5		6				-1				-1			-1
7		6		-1				-1				-1			-1*/
