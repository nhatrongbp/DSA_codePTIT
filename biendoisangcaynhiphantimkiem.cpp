#include <bits/stdc++.h>
using namespace std;
vector<int> res;
struct Node{
	int val;
	Node *l,*r;
	Node (int v){
		val=v;
		l=r=NULL;
	}
};

void post_order(Node* &t)
{
	if(t==NULL)return;
	res.push_back(t->val);
	post_order(t->l);
	post_order(t->r);
}

void in_order(Node* &t)
{
	if(t==NULL)return;
	in_order(t->l);
	cout<<t->val<<' ';
	in_order(t->r);
}

void buildSearchTree(Node* &t, int a)
{
	if(t==NULL)t=new Node(a);
	else{
		if(t->val>a)buildSearchTree(t->l,a);
		else buildSearchTree(t->r,a);
	}
}

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		Node *root=NULL;
		map<int,Node*> m;
		for(int i=0;i<n;++i){
			int a,b;char c;
			cin>>a>>b>>c;
			Node *parent;
			if(m.find(a)==m.end()){
				parent=new Node(a);
				m[a]=parent;
				if(root==NULL)root=parent;
			}
			else parent=m[a];
			Node *child=new Node(b);
			if(c=='L')parent->l=child;
			else parent->r=child;
			m[b]=child;
		}
		
		res.clear();
		post_order(root);
		m.clear();
		root=NULL;
		for(int i=0;i<=n;++i){
			//cout<<res[i]<<' ';
			if(root==NULL)root=new Node(res[i]);
			else buildSearchTree(root,res[i]);
		}
		in_order(root);
		cout<<'\n';
	}
	return 0;
}
