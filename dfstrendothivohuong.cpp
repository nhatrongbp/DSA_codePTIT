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
        stack <int> st;
        st.push(u);
        bull[u]=false;
        cout<<u;
        while(!st.empty()){
        	x=st.top();st.pop();
        	for(int i=0;i<ke[x].size();++i){
        		y=ke[x][i];
        		if(bull[y]){
        			bull[y]=false;
        			cout<<' '<<y;
        			st.push(x);st.push(y);
        			break;
				}
			}
		}
		cout<<"\n";
    }
    return 0;
}

