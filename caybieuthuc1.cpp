#include <bits/stdc++.h>
using namespace std;
struct NODE{
	char val;
	NODE *l;
	NODE *r;
	NODE(char n){
		val=n;
		l=NULL;
		r=NULL;
	}
};
bool isOperator(char c)
{
	return (c=='+'||c=='-'||c=='*'||c=='/');
}
void duyet_cay(NODE *t)
{
	if(t==NULL)return;
	duyet_cay(t->l);
	cout<<t->val;
	duyet_cay(t->r);
}
int main()
{
	int t;cin>>t;
	while(t--){
		stack < NODE* > st;
		string s;cin>>s;
		for(int i=0;i<s.length();++i){
			if(!isOperator(s[i])){
				st.push(new NODE(s[i]));
			}
			else{
				NODE *parent=new NODE(s[i]);
				parent->r=st.top();st.pop();
				parent->l=st.top();st.pop();
				st.push(parent);
			}
		}
		duyet_cay(st.top());
		cout<<"\n";
	}
	return 0;
}
