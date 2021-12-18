#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x,y,n,k;
    cin >> n;
    vector <int> ke[n+1];
    for(x=1;x<=n;++x){
        for(y=1;y<=n;++y){
            cin>>k;
            if(k>0&&x<y){
            	ke[x].push_back(y);
           		ke[y].push_back(x);
			}
		}
    }
    for(x=1;x<=n;++x){
        for(y=0;y<ke[x].size();++y)cout<<ke[x][y]<<' ';
        cout << endl;
    }
    return 0;
}

