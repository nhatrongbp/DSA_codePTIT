#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,t;
	int e;
    cin >> e;
    getline(cin,x);
    vector <int> ke[e+1];
    for(int i=1;i<=e;++i){
        getline(cin,x);
        stringstream ss(x);
    	while(ss >> t){
    		int num=0;
        	//chuyen t sang int
        	for(int j=0;j<t.size();++j)num=num*10+t[j]-'0';
        	if(num>i)ke[i].push_back(num);
    	}
    }
    for(int i=1;i<=e;i++){
        for(int j=0;j<ke[i].size();j++)cout << i << " " << ke[i][j] << endl;
    }
    return 0;
}

