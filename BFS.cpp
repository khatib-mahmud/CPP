#include<bits/stdc++.h>
using namespace std;
#define MX 999

vector<int> grap[MX];
bool vis[MX];
int dist[MX];

void bfs(int source)
{
    queue<int> q;
    vis[source] = 1;
    dist[source] = 0;
    q.push(source);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int i=0; i<grap[node].size(); i++)
        {
            int next = grap[node][i];
            if(vis[next]==0)
            {
                vis[next] =1;
                dist[next] = dist[node]+1;
                q.push(next);
            }
        }
    }
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i =1; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        grap[u].push_back(u);
        grap[v].push_back(v);

    }
    int source;
    cin>>source;

    bfs(source);
    cout<<" form node"<<source<<endl;

    for(int i ; i<=nodes ; i++)
        cout<<"Distance of "<<i<<"is :"<<dist[i]<<endl;
}
