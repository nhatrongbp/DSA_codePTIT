#include <bits/stdc++.h>

using namespace std;
bool bull[1005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int v,e,u,x,y;
        cin >> v >> e >> u;
        vector <int> ke[v+1];
        for(int i=1;i<=e;i++){
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        memset(bull,true,sizeof(bull));
        queue <int> q;
        q.push(u);
        bull[u]=false;
        cout<<u;
        while(!q.empty()){
        	x=q.front();q.pop();//cout<<"dang duyet dinh "<<x<<"\n";
        	for(int i=0;i<ke[x].size();++i){
        		y=ke[x][i];
        		if(bull[y]){
        			bull[y]=false;
        			cout<<' '<<y;
        			q.push(y);
				}
			}
		}
		cout<<"\n";
    }
    return 0;
}

