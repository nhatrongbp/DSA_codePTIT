#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,res,num;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		stack <int> a;
		a.push(-1);
		res=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='(')a.push(i);
			else{
				a.pop();//gap dau ) thi xoa dau ( truoc do
				if(!a.empty())res=max(res,i-a.top());//truoc do phai co it nhat 1 dau ( moi cap nhat max
				else a.push(i);
			}
			//cout<<res<<"\n";
		}
		cout<<res<<"\n";
	}
	return 0;
}

