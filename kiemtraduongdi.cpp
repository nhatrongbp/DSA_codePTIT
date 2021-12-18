#include <bits/stdc++.h>

using namespace std;
bool ok[1005];
vector <int> ke[1005];
void BFS(int u,int v)
{
    queue <int> q;
    q.push(u);
    ok[u]=false;
    while(!q.empty())
    {
        int x=q.front();q.pop();
        if(x==v){
            cout<<"YES"<<endl;
            return;
        }
        for(int i=0;i<ke[x].size();i++){
            if(ok[ke[x][i]]){
                ok[ke[x][i]]=false;
                q.push(ke[x][i]);
            }
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)ke[i].clear();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q;
        cin>>q;
        while(q--)
        {
            memset(ok,true,sizeof(ok));
            int start,finish;
            cin>>start>>finish;
            BFS(start,finish);
        }
    }
    return 0;
}

