#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
vector<vector<int>> cur_cc;

void dfs(int vertex)
{
    cur_cc.push_back(vertex);
    vis[vertex] = 1;

    for (int i=0;i< g[vertex].size();i++)
    {
        int child = g[vertex][i];
        if (vis[child])
            continue;
        dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
            cur_cc.clear();
        dfs(i);
        
    }
    cout << cur_cc.size() << endl;

    // for (int i = 0; i < cur_cc.size(); i++)
    // {
    //    for (int j = 0; j < i.size(); j++)
    //    {
    //        int vertex = cur_cc[i][j];

    //    }
       
    // }
    
}