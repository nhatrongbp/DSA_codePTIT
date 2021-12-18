#include <bits/stdc++.h>
using namespace std;
long long binaryToDecimal(string n)
{
    string num = n;
    long long dec_value = 0;
    long long base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
int main()
{
	int t;cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		cout<<binaryToDecimal(a)*binaryToDecimal(b)<<"\n";
	}
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int t,twopower[30]={1,2,4,8,16,32,64,128,256,512,1024,
2048,4096,8192,16384,32768,65536,131072,262144,524288,
1048576,2097152,4194304,8388608,16777216,33554432,
67108864,134217728,268435456,536870912};
int main()
{
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		int c[a.length()+b.length()-1]={0};
		for(int i=0;i<a.length();++i){
			for(int j=0;j<b.length();++j)c[i+j]+=int(a[i]-'0')*int(b[j]-'0');
		}
		int res=0;
		for(int i=0;i<a.length()+b.length()-1;++i)res+=c[i]*twopower[i];
		cout<<res<<"\n";
	}
	return 0;
}*/
/*
0011	10
0*x^0 + 0*x^1 + 1*x^2 + 1*x^3	1*x^0 + 0*x^1
*/

