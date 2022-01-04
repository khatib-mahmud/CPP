#include <bits/stdc++.h>
using namespace std;
const int N = 9999;
int vis[N];
int level[N];
vector<int> g[N];

void bfs(int source)
{

    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        //for(auto child :g[cur_v])
        for (int i = 0; i < g[cur_v].size(); i++)
        {
            int child = g[cur_v][i];

            if (vis[child]==0)
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] + 1;
            }
        }
        
    }
    cout << endl;
}

int main()
{
    int n, e;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout<<"Give Root: "<<endl;
    int root;
    cin>>root;
    bfs(root);

    // sort(level,level+e);
    for (int i = 1; i <= e; i++)
    {
        cout << i << " : " << level[i] << endl;
    }
    
}