#include <bits/stdc++.h>
using namespace std;
//C(n+1)=[2*(2n+1)/(n+2)]*C(n)
string nhan(string a, string b)
{
    int lena=a.size();
    int lenb=b.size();
    vector<short> tmp(lena+lenb,0);
    vector<short> C(lena+lenb);
	for(int i=0;i<lenb;i++){
        for(int j=0;j<lena;j++){
            tmp[j+i]=tmp[j+i]+(int(b[i])-'0')*(int(a[j])-'0');
        }
    }
    int ii=0;
    for(int k=lena+lenb-2;k>=0;k--){
        if(tmp[k]>=10 && k>=1){
            tmp[k-1]=tmp[k-1]+tmp[k]/10;
            C[ii]=tmp[k]%10;
            ii++;
        }
        else if(tmp[k]<10 && k>=1){
            C[ii]=tmp[k];
            ii++;
        }
        else{
            if(tmp[0]>=10){
                C[ii]=tmp[0]%10;
                ii++;
                C[ii]=tmp[0]/10;
            }
            else C[ii]=tmp[0];
        }
    }
    string res="";
    for(int h=ii;h>=0;h--)res+=(C[h]+'0');
    return res;
}

string chia(string a, int b)
{
	string ans; 
    int idx = 0; 
    int temp = a[idx] - '0'; 
    while (temp < b) 
        temp = temp * 10 + (a[++idx] - '0'); 
        
    while (a.size() > idx) { 
        ans += (temp / b) + '0'; 
        temp = (temp % b) * 10 + a[++idx] - '0'; 
    } 
  
    if (ans.length() == 0) return "0"; 
    return ans; 
}

int main()
{
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		if(n==0||n==1){
			cout<<"1\n";
			continue;
		}
		string left="1";
		string right;
		for(int i=1;i<n;++i){
			int temp=2*(2*i+1);
			stringstream ss;
			ss<<temp;
			//C(n+1)=[2*(2n+1)/(n+2)]*C(n)
			right=chia(nhan(ss.str(),left),i+2);
			left=right;
		}
		cout<<right<<"\n";
	}
	return 0;
}
