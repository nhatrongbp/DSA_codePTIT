#include <bits/stdc++.h>
using namespace std;
vector <int> v1,v2;
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
void duyet_cay(NODE* t,int i)
{
	if(t==NULL)return;
	else {
		if(i==1)v1.push_back(t->val);
		else v2.push_back(t->val);
		duyet_cay(t->l,i);
		duyet_cay(t->r,i);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		NODE* t1=NULL;
		int n;cin>>n;
		while(n--){
			int a,b;char c;
			cin>>a>>b>>c;
			if(t1==NULL){
				t1=new NODE(a);
				noi_node(t1,b,c);
			}
			else tao_cay(t1,a,b,c);
		}
		NODE* t2=NULL;
		cin>>n;
		while(n--){
			int a,b;char c;
			cin>>a>>b>>c;
			if(t2==NULL){
				t2=new NODE(a);
				noi_node(t2,b,c);
			}
			else tao_cay(t2,a,b,c);
		}
		v1.clear();v2.clear();
		duyet_cay(t1,1);
		duyet_cay(t2,2);
		/*for(int i=0;i<v1.size();++i)cout<<v1[i]<<' ';
		cout<<endl;
		for(int i=0;i<v2.size();++i)cout<<v2[i]<<' ';
		cout<<endl;*/
		if(v1.size()!=v2.size()){
			cout<<"0\n";
			continue;
		}
		short res=1;
		for(int i=0;i<v1.size();++i){
			if(v1[i]!=v2[i]){
				res=0;break;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

