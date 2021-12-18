#include <bits/stdc++.h>
using namespace std;
short res;
struct node{
	int val;
	node *l;
	node *r;
	node(int n){
		val=n;
		l=NULL;
		r=NULL;
	}
};
typedef node NODE;
void noi_node(NODE* &t,int b,char c)
{
	if(c=='L')t->l=new NODE(b);
	if(c=='R')t->r=new NODE(b);
}
void tao_cay(NODE* t,int a,int b,char c)
{
	if(t==NULL)return;
	if(t->val==a)noi_node(t,b,c);
	tao_cay(t->l,a,b,c);
	tao_cay(t->r,a,b,c);
}
void duyet_cay(NODE* t)
{
	if(t==NULL||res==0)return;
	if( (t->l==NULL&&t->r!=NULL) || (t->l!=NULL&&t->r==NULL) ){
		res=0;
		return;
	}
	duyet_cay(t->l);
	duyet_cay(t->r);
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
				t=new NODE(a);
				noi_node(t,b,c);
			}
			else tao_cay(t,a,b,c);
		}
		res=1;
		duyet_cay(t);
		cout<<res<<"\n";
	}
	return 0;
}

