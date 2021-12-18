#include <bits/stdc++.h>
using namespace std;
int t,k;
string s,res;
void Try(int i)//swap(s[i],chu so lon nhat ben phai s[i])
{
	if(k==0)return;//neu da su dung het K lan swap
	char m=s[i];//chu so lon nhat o ben phai s[i]
	for(int j=i+1;j<s.length();++j){
		if(m<s[j])m=s[j];
	}
	//if(m!=s[i])--k;
	//neu s[i]!=chu so lon nhat ben phai s[i]
	// thi moi tinh la doi cho
	
	//trong truong hop ben phai s[i] co nhieu chu so == m
	//ta uu tien doi cho s[i] voi phan tu tinh tu ben phai sang
	//vi swap s[i] voi chu so cang cach xa no thi cang thu duoc so lon hon
	for(int j=s.length()-1;j>=i;--j){
		if(s[j]==m){
			swap(s[j],s[i]);
			if(s[j]!=s[i])--k;//2 chu so khac nhau moi tinh la doi cho
			/*cout<<"swap s"<<i<<" voi s"<<j<<" thu duoc "<<s<<endl;
			cout<<"so lan swap con lai: "<<k<<endl;*/
			if(s.compare(res)>0)res=s;//cap nhat max
			Try(i+1);
			swap(s[j],s[i]);
			if(s[j]!=s[i])++k;
		}
	}
}
int main()
{
	cin>>t;
	while(t--){
		cin>>k>>s;res=s;
		Try(0);
		cout<<res<<"\n";
	}
	return 0;
}

