#include <bits/stdc++.h>
using namespace std;
struct element
{
	int value;
	int times;
};
struct element e[10000];
int n,a[10000];
bool timescmp(struct element x, struct element y)
{
	if(x.times!=y.times)return (x.times>y.times);
	else return (x.value<y.value);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int ne=0;
		e[ne].value=a[0];
		e[ne].times=1;
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1])e[ne].times++;
			else{
				ne++;
				e[ne].value=a[i];
				e[ne].times=1;
			}
		}
		stable_sort(e,e+ne+1,timescmp);
		for(int i=0;i<=ne;i++){
			for(int j=0;j<e[i].times;j++)cout<<e[i].value<<' ';
		}
		cout<<endl;
	}
}

