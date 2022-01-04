#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
vector<int> g[N];
int vis[N];
void dfs(int i, int j, int initialcolor, int newcolor , vector<vector<int>> &image){
    

     
    for (int i = 0; i < g[vertex].size(); i++)
    {
        int child = g[vertex][i];
        if(vis[child])continue;

        dfs(child);
    }
    
}


int main(){
    int n,e;
    cin>>n>>e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
        
    }

    
}