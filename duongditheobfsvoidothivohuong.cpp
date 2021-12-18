#include <bits/stdc++.h>

using namespace std;
bool ok[1005];
int truoc[1005];
vector <int> ke[1005];
void BFS(int u, int v)
{
    //if(!ok[v])return;
    queue <int> q;
    q.push(u);
    ok[u]=false;
    while(!q.empty())
    {
        int x=q.front();q.pop();
        for(int i=0;i<ke[x].size();i++){
            if(ok[ke[x][i]]){
                ok[ke[x][i]]=false;
                truoc[ke[x][i]]=x;
                q.push(ke[x][i]);
            }
        }
    }
}
void Trace(int v, int u)
{
    if(truoc[v]==0){//neu ko co cach nao den dich
        cout << -1;
        return;
    }
    stack <int> st;
    st.push(v);
    while(v!=u)
    {
        st.push(truoc[v]);
        v=truoc[v];
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int v,e,start,finish;
        cin >> v >> e >> start >> finish;
        for(int i=1;i<=v;i++)ke[i].clear();
        memset(ok,true,sizeof(ok));
        memset(truoc,0,sizeof(truoc));
		//diem nao ma ko di qua thi truoc no la 0
        //neu ko co cach nao toi finish thi truoc[finish]==0
        for(int i=0;i<e;i++){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(start,finish);
        Trace(finish,start);
        cout << endl;
    }
    return 0;
}


