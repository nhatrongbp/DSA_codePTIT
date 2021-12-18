#include <bits/stdc++.h>

using namespace std;
bool ok[1005];
vector <int> ke[1005];
void Init(int v,int e)
{
    memset(ok,true,sizeof(ok));
    for(int i=1;i<=v;i++)ke[i].clear();
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);//co huong
        ke[y].push_back(x);//vo huong
    }
}
void DFS(int u)
{
    ok[u]=false;
    for(int i=0;i<ke[u].size();i++){
        if(ok[ke[u][i]]){
            ok[ke[u][i]]=false;
            DFS(ke[u][i]);
        }
    }
}
int tplt(int v)
{
    int res=0;
    for(int i=1;i<=v;i++){
        if(ok[i]){
            res++;
            DFS(i);
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        Init(v,e);
        cout<<tplt(v)<<"\n";
    }
    return 0;
}

