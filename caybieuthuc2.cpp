#include <bits/stdc++.h>
using namespace std;
struct NODE{
	string val;
	NODE *l;
	NODE *r;
	NODE(string n){
		val=n;
		l=NULL;
		r=NULL;
	}
};
bool isOperator(char c)
{
	return (c=='+'||c=='-'||c=='*'||c=='/');
}
long long strval(string str)
{
	long long res=0;
	if(!isOperator(str[0]))res=str[0]-'0';
	for(int i=1;i<str.length();++i){
		res=res*10+str[i]-'0';
	}
	if(isOperator(str[0]))return res*-1;
	return res;
}
long long duyet_cay(NODE *t)
{
	if(t->l==NULL&&t->r==NULL)return strval(t->val);
	long long x=duyet_cay(t->l);
	long long y=duyet_cay(t->r);
	if(t->val=="+")return x+y;
	if(t->val=="-")return x-y;
	if(t->val=="*")return x*y;
	if(t->val=="/")return x/y;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s[n+5];
		for(int i=0;i<n;++i)cin>>s[i];
		queue < NODE* > q;
		NODE* root=new NODE(s[0]);
		q.push(root);
		for(int i=1;i<n;i+=2){
			NODE* parent=q.front();q.pop();
			parent->l=new NODE(s[i]);
			parent->r=new NODE(s[i+1]);
			q.push(parent->l);
			q.push(parent->r);
			//cout<<"parent: "<<parent->val<<endl;
			//cout<<"left: "<<s[i]<<" right: "<<s[i+1]<<endl;
		}
		cout<<duyet_cay(root)<<"\n";
	}
	return 0;
}
