#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;

vector<int> t;


void dfs(int vertex)
{

    vis[vertex] = true;
    t.push_back(vertex);
    for (auto child : g[vertex])
    {
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
    int c=0;

    for(int i=1;i<=n;i++)
    {
        if(vis[i])
        continue;
        t.clear();
        dfs(i);
        c++;
        cc.push_back(t);
    }
    cout<<"total component:"<<cc.size()<<endl;
    for(auto i:cc){
        for(int j=1;j<=i.size();j++){
            cout<<i[j]<<" ";
        }
        cout<<endl;
    }

}