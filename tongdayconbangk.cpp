/*#include <bits/stdc++.h>
using namespace std;
int n,k,a[15],res[15],cnt;
bool bull[15];
void Try(int begin, int sum, int id)
{
	if(sum==k){
		++cnt;
		for (int i = 0; i < id; ++i) { 
 			cout << res[i] <<" " ;
		}
		cout << "\n";
	}
	for(int i=begin;i<n;++i){
		if(a[i]>k-sum)break;
		if(bull[i]&&a[i]<=k-sum){
			bull[i]=false;
			res[id]=a[i];
			Try(i,sum+a[i],id+1);
			bull[i]=true;
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a,a+n);
	memset(bull,true,sizeof(bull));
	cnt=0;
	Try(0,0,0);
	cout<<cnt;
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int n,k,a[15],res[15];
bool bull[15];
vector<string> v;
string itostring(int x)
{
	stringstream ss;
	ss << x;
	return ss.str();
}
void Try(int begin, int sum, int id)
{
	if(sum==k){
		string temp="";
		for (int i = 0; i<id; ++i) { 
 			temp=temp+itostring(res[i])+" ";
		}
		v.push_back(temp);
	}
	for(int i=begin;i<n;++i){
		if(a[i]>k-sum)break;
		if(bull[i]&&a[i]<=k-sum){
			bull[i]=false;
			res[id]=a[i];
			Try(i,sum+a[i],id+1);
			bull[i]=true;
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a,a+n);
	memset(bull,true,sizeof(bull));
	Try(0,0,0);
	for(int i=v.size()-1;i>=0;--i)cout<<v[i]<<"\n";
	cout<<v.size();
	return 0;
}
