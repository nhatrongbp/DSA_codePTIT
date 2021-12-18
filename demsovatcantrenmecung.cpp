#include<bits/stdc++.h>

using namespace std;
vector< vector<bool> > visit;
int n,m;

void dfs(int i,int j){
    visit[i][j]=false;
    if(i-1>=0&&visit[i-1][j])dfs(i-1,j);
    if(j-1>=0&&visit[i][j-1])dfs(i,j-1);
    if(i+1<n&&visit[i+1][j])dfs(i+1,j);
    if(j+1<m&&visit[i][j+1])dfs(i,j+1);
}

long long wolve(){
	char c;
	cin>>n>>m;
	visit.assign(n+5,vector<bool>(m+5,false));
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>c;
			if(c=='#')visit[i][j]=true;
		}
	}
	long long res=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(visit[i][j]){
				res++;
				dfs(i,j);
			}
		}
	}
	return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout<<wolve();
    return 0;
}
