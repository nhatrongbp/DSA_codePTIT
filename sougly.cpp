#include <bits/stdc++.h>
using namespace std;

string multiply(string b, int a)
{
	string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      
    {
        temp = a * (b[i]-'0') + temp;
        s.insert(0,1,(temp%10)+'0');
        temp = temp/10;
    }
     
    if (temp>0)
    {
        s.insert(0,1,temp+'0');
    } 
    return s;
}
string minstr(string a, string b)
{
	if(a.length()==b.length()){
		if(a<b)return a;
		else return b;
	}
	else {
		if(a.length()<b.length())return a;
		else return b;
	}
}
int main()
{
	vector<string> ugle;
	ugle.push_back("1");
	int i2=0,i3=0,i5=0;
	for(int i=1;i<10000;++i){
		string multi2=multiply(ugle[i2],2);
		string multi3=multiply(ugle[i3],3);
		string multi5=multiply(ugle[i5],5);
		string next=minstr(multi2,minstr(multi3,multi5));
		ugle.push_back(next);
		if(next==multi2)++i2;
		if(next==multi3)++i3;
		if(next==multi5)++i5;
	}
	//cout<<ugle.size()<<endl;
	//for(int i=0;i<20;++i)cout<<ugle[i]<<" ";
	int n,t;cin>>t;
	while(t--){
		cin>>n;cout<<ugle[n-1]<<"\n";
	}
	return 0;
}

