#include <bits/stdc++.h>
using namespace std;
string s;
bool bull;
vector<string> res;
bool cal(vector<char> temp)
{
	int a=(temp[0]-'0')*10+temp[1]-'0';
	int b=(temp[5]-'0')*10+temp[6]-'0';
	int c=(temp[10]-'0')*10+temp[11]-'0';
	if(temp[3]=='+'){
		if(a+b==c){
			string str="";for(int i=0;i<12;++i)str+=temp[i];
			res.push_back(str);
			//for(int i=0;i<12;++i)cout<<temp[i];cout<<"\n";
			return true;
		}
		else return false;
	}
	else if(temp[3]=='-'){
		if(a-b==c){
			string str="";for(int i=0;i<12;++i)str+=temp[i];
			res.push_back(str);
			//for(int i=0;i<12;++i)cout<<temp[i];cout<<"\n";
			return true;
		}
		else return false;
	}
	else {
		if(a+b==c){
			temp[3]='+';
			string str="";for(int i=0;i<12;++i)str+=temp[i];
			res.push_back(str);
			//for(int i=0;i<12;++i)cout<<temp[i];cout<<"\n";
			return true;
		}
		else if(a-b==c){
			temp[3]='-';
			string str="";for(int i=0;i<12;++i)str+=temp[i];
			res.push_back(str);
			//for(int i=0;i<12;++i)cout<<temp[i];cout<<"\n";
			return true;
		}
		else return false;
	}
}
void Try(int idx, vector<char> temp)
{
	if(s[idx]!='?'){
		temp.push_back(s[idx]);
		if(idx==11){
			//ktra va in
			if(cal(temp))bull=false;
		}
		else Try(idx+1,temp);
	}
	else {
		if(idx==3){
			temp.push_back(s[idx]);
			Try(idx+1,temp);
		}
		else if(idx==0||idx==5||idx==10){
			for(int i=1;i<=9;++i){
				temp.push_back(char(i+'0'));
				Try(idx+1,temp);
				temp.pop_back();
			}
		}
		else if(idx==1||idx==6){
			for(int i=0;i<=9;++i){
				temp.push_back(char(i+'0'));
				Try(idx+1,temp);
				temp.pop_back();
			}
		}
		else if(idx==11){
			for(int i=0;i<=9;++i){
				temp.push_back(char(i+'0'));
				//ktra va in
				if(cal(temp))bull=false;
				temp.pop_back();
			}
		}
	}
}
int main()
{
	int t;cin>>t;
	getline(cin,s);
	while(t--){
		getline(cin,s);
		res.clear();
		if(s[3]=='/'||s[3]=='*'){
			cout<<"WRONG PROBLEM!\n";
			continue;
		}
		bull=true;
		vector<char> v;
		Try(0,v);
		if(bull)cout<<"WRONG PROBLEM!\n";
		else{
			//cout<<res.size()<<endl;
			sort(res.begin(),res.end());
			cout<<res[0]<<"\n";
			//for(int i=0;i<res.size();++i)cout<<res[i]<<endl;
		}
	}
	return 0;
}

