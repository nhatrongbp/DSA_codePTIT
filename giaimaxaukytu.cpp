#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		string s,a,b;cin>>s;
		stack<char> cha;
		stack<long long> num;
		long long temp=0;
		for(int i=0;i<s.length();++i){
			if(s[i]>='0'&&s[i]<='9'){
				while(s[i]>='0'&&s[i]<='9'){
					temp=temp*10+s[i]-'0';
					++i;
				}
				num.push(temp);
				//cout<<"push the number: "<<temp<<endl;
				temp=0;--i;
			}
			else if(s[i]==']'){
				a="";
				while(cha.top()!='['){
					a=cha.top()+a;
					cha.pop();
				}
				cha.pop();
				//cout<<"pop the string: "<<a<<"\t";
				b="";
				//cout<<"and repeat: "<<num.top()<<"time(s)\t";
				for(long long j=0;j<num.top();++j)b+=a;
				num.pop();
				for(int j=0;j<b.length();++j)cha.push(b[j]);
				//cout<<"push the string: "<<b<<endl;
			}
			else if(s[i]=='[') {
				if(i==0){
					num.push(1);
					//cout<<"before [ not found number, push 1\t";
				}
				else if(s[i-1]<'0'||s[i-1]>'9'){
					num.push(1);
					//cout<<"before [ not found number, push 1\t";
				}
				cha.push(s[i]);
				//cout<<"push the [\n";
			}
			else {
				cha.push(s[i]);
				//cout<<"push the character: "<<s[i]<<"\n";
			}
		}
		string res="";
		while(!cha.empty()){
			res=cha.top()+res;
			cha.pop();
		}
		cout<<res<<"\n";
	}
	return 0;
}
