#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;cin>>s;
	vector< pair<int,int> > v;
	pair<int,int> temp;
	stack<int> st;
	int number_of_brackets=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='('){
			st.push(number_of_brackets);
			temp.first=i;temp.second=i;
			v.push_back(temp);
			++number_of_brackets;
		}
		else if(s[i]==')'){
			v[st.top()].second=i;
			st.pop();
		}
	}
	//for(int i=0;i<v.size();++i)cout<<i<<' '<<v[i].first<<' '<<v[i].second<<"\n";
	vector<string> ans;
	int a[v.size()+5]={0};
	while(true){
		int i;
		//sinh
		for(i=v.size()-1;i>=0;--i){
			if(a[i]==0){
				a[i]=1;break;
			}
			else a[i]=0;
		}
		if(i<0)break;
		//in ra
		string res1=s,res2="";
		for(i=0;i<v.size();++i){
			//cout<<a[i];
			if(a[i]){
				res1[v[i].first]='!';
				res1[v[i].second]='!';
			}
		}
		for(i=0;i<res1.length();++i){
			if(res1[i]!='!')res2+=res1[i];
		}
		ans.push_back(res2);
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();++i){
		if(i==0)cout<<ans[i]<<"\n";
		else if(ans[i]!=ans[i-1])cout<<ans[i]<<"\n";
	}
	return 0;
}

