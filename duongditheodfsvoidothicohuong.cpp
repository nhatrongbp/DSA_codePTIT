#include <bits/stdc++.h>

using namespace std;
bool ok[1005];
int truoc[1005];
vector <int> ke[1005];
void DFS(int u, int v)
{
    if(!ok[v])return;//neu da di qua dich
    ok[u]=false;//danh dau la di qua
    for(int i=0;i<ke[u].size();i++){
        if(ok[ke[u][i]]){
            truoc[ke[u][i]]=u;
            DFS(ke[u][i],v);
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
            //ke[y].push_back(x);
        }
        DFS(start,finish);
        Trace(finish,start);
        cout << endl;
    }
    return 0;
}

