#include <bits/stdc++.h>
using namespace std;
struct Node{
	int val;
	Node *l,*r;
	Node (int v){
		val=v;
		l=r=NULL;
	}
};

int search(int a[],int l,int r,int key){
	for(int i=l;i<=r;++i){
		if(a[i]==key)return i;
	}
	return -1;
}

int* extrackKeys(int in[],int level[],int m,int n){
	int *newlevel=new int[m], j=0;
	for(int i=0;i<n;++i){
		if(search(in,0,m-1,level[i])!=-1)
			newlevel[j++]=level[i];
	}
	return newlevel;
}

Node* Build(int in[],int level[], int inStrt, int inEnd,int n)
{
	if(inStrt>inEnd)return NULL;
	Node *parent = new Node(level[0]);
	if(inStrt==inEnd)return parent;
	
	int inIndex=search(in,inStrt,inEnd,parent->val);
	if(inIndex==-1)return NULL;
	
	int* llevel=extrackKeys(in,level,inIndex,n);
	int* rlevel=extrackKeys(in+inIndex+1,level,n,n);
	
	parent->l=Build(in,llevel,inStrt,inIndex-1,inIndex-inStrt);
	parent->r=Build(in,rlevel,inIndex+1,inEnd,inEnd-inIndex);
	
	delete[] llevel;
	delete[] rlevel;
	return parent;
}

void post_order(Node* t)
{
	if(t==NULL)return;
	post_order(t->l);
	post_order(t->r);
	cout<<t->val<<' ';
}

int in[1005],level[1005];
int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		memset(in,-1,sizeof(in));
		memset(level,-1,sizeof(level));
		for(int i=0;i<n;++i)cin>>in[i];
		for(int i=0;i<n;++i)cin>>level[i];
		Node *root = Build(in,level,0,n-1,n);
		post_order(root);
		cout<<'\n';
	}
	return 0;
}
