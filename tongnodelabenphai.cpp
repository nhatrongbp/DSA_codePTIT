#include <bits/stdc++.h>
using namespace std;
int res;
struct node{
	int val;
	node *l;
	node *r;
	node(int vl){
		val=vl;
		l=NULL;
		r=NULL;
	}
};
typedef node NODE;
void duyet_cay(NODE* t)
{
	if(t==NULL){
		return;
	}
	if(t->r!=NULL&&t->r->l==NULL&&t->r->r==NULL){
		res+=t->r->val;
	}
	duyet_cay(t->l);
	duyet_cay(t->r);
}
int main()
{
	int t;cin>>t;
	while(t--){
		NODE* root=NULL;
		map<int,NODE*> m;
		int n;cin>>n;
		while(n--){
			int a,b;char c;
			cin>>a>>b>>c;
			NODE *parent;
			if(m.find(a)==m.end()){
				parent=new NODE(a);
				m[a]=parent;
				if(root==NULL)root=parent;
			}
			else parent=m[a];
			NODE *child=new NODE(b);
			if(c=='L')parent->l=child;
			else parent->r=child;
			m[b]=child;
		}
		res=0;
		duyet_cay(root);
		cout<<res<<"\n";
	}
	return 0;
}

