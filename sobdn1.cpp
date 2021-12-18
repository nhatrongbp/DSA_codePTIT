#include <bits/stdc++.h>
using namespace std;
//max(n)=2^63 ~ 19 chu so
//20 chu so moi chu so co 2 cach chon
//co tong cong ~ 2^20 so BDN
/*bool stringcmp(string a, string b)
{
	if(a==b)return true;
	if(a.length()!=b.length())return a.length()<b.length();
	for(int i=0;i<a.length();++i){
		if(a[i]!=b[i])return (int)a[i]<(int)b[i];
	}
}*/
int main()
{
	/*string s;
	int t,r;
	cin>>t;
	while(t--){
		cin>>s;r=0;
		queue<string> q;
		q.push("1");
		for(int i=0;i<1111111;++i){
			if(stringcmp(q.front(),s))++r;
			else break;
			q.push(q.front()+"0");
			q.push(q.front()+"1");
			q.pop();
		}
		cout<<r<<"\n";
	}*/
	long long n;
	int t,r;
	cin>>t;
	while(t--){
		cin>>n;r=0;
		queue<long long> q;
		q.push(1);
		while(true){
			if(q.front()<=n)++r;
			else break;
			q.push(q.front()*10);
			q.push(q.front()*10+1);
			q.pop();
		}
		cout<<r<<"\n";
	}
	return 0;
}

