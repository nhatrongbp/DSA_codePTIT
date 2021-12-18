#include <bits/stdc++.h>
using namespace std;
short res;
int level;
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
	if(res==0)return;
	if(t==NULL){
		if(level==-1)level=b->lev;
		else if(b->lev!=level)res=0;
		return;
	}
	if( (t->l==NULL&&t->r!=NULL) || (t->l!=NULL&&t->r==NULL) ){
		res=0;
		return;
	}
	duyet_cay(t,t->l);
	duyet_cay(t,t->r);
}
int main()
{
	int t;cin>>t;
	while(t--){
		NODE* t=NULL;
		int n;cin>>n;
		while(n--){
			int a,b;char c;
			cin>>a>>b>>c;
			if(t==NULL){
				t=new NODE(a,1);
				noi_node(t,b,c);
			}
			else tao_cay(t,a,b,c);
		}
		res=1;level=-1;
		duyet_cay(t,t);
		if(res)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

