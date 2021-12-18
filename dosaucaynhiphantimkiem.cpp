#include <bits/stdc++.h>
using namespace std;
int res;
struct Node{
	int val;
	Node *l,*r;
	Node (int v){
		val=v;
		l=r=NULL;
	}
};

void Build(Node* &t, int a)
{
	if(t==NULL)t=new Node(a);
	else{
		if(t->val>a)Build(t->l,a);
		else Build(t->r,a);
	}
}

void printTree(Node* t,int s)
{
	if(t==NULL)return;
	if(t->l==NULL&&t->r==NULL){
		res=max(res,s);
		return;
	}
	//cout<<t->val<<' ';
	printTree(t->l,s+1);
	//cout<<t->val<<' ';
	printTree(t->r,s+1);
	//cout<<t->val<<' ';
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		Node *root=NULL;
		for(int i=0;i<n;++i){
			int a;cin>>a;
			if(root==NULL)root=new Node(a);
			else Build(root,a);
		}
		res=0;
		printTree(root,0);
		cout<<res<<'\n';
	}
	return 0;
}
