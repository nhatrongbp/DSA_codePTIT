#include <bits/stdc++.h>
using namespace std;
vector <int> v[1005];
int max_level;
struct node{
	int val,lev;
	node *l;
	node *r;
	node(int vl,int lv){
		val=vl;lev=lv;
		l=NULL;
		r=NULL;
	}
};
typedef node NODE;
void noi_node(NODE* &t,int b,char c)
{
	if(c=='L')t->l=new NODE(b,t->lev+1);
	if(c=='R')t->r=new NODE(b,t->lev+1);
}
void tao_cay(NODE* t,int a,int b,char c)
{
	if(t==NULL)return;
	if(t->val==a)noi_node(t,b,c);
	tao_cay(t->l,a,b,c);
	tao_cay(t->r,a,b,c);
}
void duyet_cay(NODE* b,NODE* t)
{
	if(t==NULL)return;
	max_level=max(max_level,t->lev);
	v[t->lev].push_back(t->val);
	duyet_cay(t,t->l);
	duyet_cay(t,t->r);
}
int main()
{
	int t;cin>>t;
	while(t--){
		NODE* t=NULL;
		int n;cin>>n;
		for(int i=1;i<=1000;++i)v[i].clear();
		while(n--){
			int a,b;char c;
			cin>>a>>b>>c;
			if(t==NULL){
				t=new NODE(a,1);
				noi_node(t,b,c);
			}
			else tao_cay(t,a,b,c);
		}
		max_level=1;
		duyet_cay(t,t);
		for(int i=1;i<=max_level;++i){
			//cout<<"muc "<<i<<": ";
			if(i%2==0)
			for(int j=0;j<v[i].size();++j)cout<<v[i][j]<<' ';
			else
			for(int j=v[i].size()-1;j>=0;--j)cout<<v[i][j]<<' ';
			//cout<<endl;
		}
		cout<<"\n";
	}
	return 0;
}

