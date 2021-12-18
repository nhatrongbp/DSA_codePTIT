#include <bits/stdc++.h>
//lan luot xoa tung canh xem co tang so thanh phan lien thong hay khong
using namespace std;
bool ok[1005];
vector <int> ke[1005];
vector < pair<int,int> > canhcau;//mang chua dap an lan luot la cac canh
int res;
void Init(int v,int e)
{
    for(int i=1;i<=v;i++)ke[i].clear();
    memset(ok,true,sizeof(ok));
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
int tplt(int v)//dem so thanh phan lien thong
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
void xoacanh(int i,int e, vector < pair<int,int> > temp)
//cap nhat lai danh sach ke sau khi xoa canh thu i
{
    for(int j=0;j<e;j++){
        if(j!=i){//lay tu canh 0 den canh e-1 ngoai tru canh i
            ke[ temp[j].first ].push_back(temp[j].second);
            ke[ temp[j].second ].push_back(temp[j].first);
        }
    }
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
        canhcau.clear();
        vector < pair<int,int> > canh;//day la danh sach canh ban dau
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            canh.push_back({x,y});
            ke[x].push_back(y);
            ke[y].push_back(x);
            //thuc ra push vao ds ke de tinh so lien thong ban dau
            //ve sau, tinh so lien thong sau khi xoa canh: thi phai cap nhat lai ds ke
        }
        res=tplt(v);//so lien thong ban dau

        for(int i=0;i<e;i++){//lan luot loai tu canh thu 0 den canh thu e-1
            Init(v,e);//reset danh sach ke
            xoacanh(i,e,canh);//xoa canh thu i
            if(tplt(v)>res){//neu canh i la canh cau thi push vao mang dap an
            	//push theo nguyen tac so be hon o ben trai
                if(canh[i].first>canh[i].second)
                    canhcau.push_back({canh[i].second,canh[i].first});
                else
                    canhcau.push_back({canh[i].first,canh[i].second});
            }
        }
        sort(canhcau.begin(),canhcau.end());//sort by first
        for(int i=0;i<canhcau.size();i++)
            cout << canhcau[i].first << " " << canhcau[i].second << " ";
        cout << endl;
    }
    return 0;
}

