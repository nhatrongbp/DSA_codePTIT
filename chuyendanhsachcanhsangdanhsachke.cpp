#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int v,e;
        cin >> v >> e;
        vector <int> ke[v+1];
        for(int i=1;i<=e;i++){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            //ke[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            cout << i << ":";
            for(int j=0;j<ke[i].size();j++)cout << " " << ke[i][j];
            cout << endl;
        }
    }
    return 0;
}

