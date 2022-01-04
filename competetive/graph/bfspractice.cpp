#include <bits/stdc++.h>
using namespace std;
vector<int> g[9999];
int vis[9999];
int lev[9999];
queue<int> q;

void bfs(int source)
{
    vis[source] = 1;
    q.push(source);

    while (!q.empty())
    {
        int cur_v = q.front();
        cout<<cur_v<<" ";
        q.pop();
        for (int i = 0; i < g[cur_v].size(); i++)
        {
            int child = g[cur_v][i];
             
            if(!vis[child]){
                vis[child]=1;
                q.push(child);
                lev[child] = lev[cur_v] +1;
                cout<<endl;
            }
           
        }
      
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int root;
    cout << "give root: " << endl;
    cin >> root;
    bfs(root);
 
    
}