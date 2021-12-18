#include <bits/stdc++.h>
using namespace std;
long long res;
struct Node{
	int val;
	Node *l,*r;
	Node (int v){
		val=v;
		l=r=NULL;
	}
};

void makeNode(Node *t, int b,char c)
{
	if(c=='L')t->l=new Node(b);
	else t->r=new Node(b);
}

void build(Node *t,int a,int b,char c)
{
	if(t==NULL)return;
	if(t->val==a)makeNode(t,b,c);
	else{
		build(t->l,a,b,c);
		build(t->r,a,b,c);
	}
}

long long maxSum(Node *t)
{
	if(t->l==NULL&&t->r==NULL)return t->val;
	if(t->l!=NULL&&t->r!=NULL){
		long long maxLeft=maxSum(t->l);
		long long maxRight=maxSum(t->r);
		res=max(res,maxLeft+maxRight+t->val);
		return max(maxLeft,maxRight)+t->val;
	}
	else{
		if(t->l!=NULL)return t->val+maxSum(t->l);
		return t->val+maxSum(t->r);
	}
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		Node *root=NULL;
		int n;cin>>n;
		while(n--){
			int a,b;char c;
			cin>>a>>b>>c;
			if(root==NULL){
				root=new Node(a);
				makeNode(root,b,c);
			}
			else build(root,a,b,c);
		}
		res=-1e18;
		maxSum(root);
		cout<<res<<'\n';
	}
	return 0;
}


