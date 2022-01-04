#include<bits/stdc++.h>
using namespace std;
int mx = 0;
void DFS(vector<int> g[], int s, int c){
    if(c>mx)
    mx = c;
    for (int i = 0; i < g[s].size(); i++)
    {
        DFS(g, g[s][i], c+1 );
    }

}



int main(){
    int n;
    cin>>n;
    vector<int> boss;
    vector<int> grap[n];

    for (int i = 0; i < n; i++)
    {
        int k;cin>>k;
        if(k!=-1){
            grap[k-1].push_back(i);
        }
        else
        boss.push_back(i);
    }
    for(int i=0;i<boss.size();i++)
    {
        int b =boss[i];
        DFS(grap, b, 0);
    }

    cout<<mx+1;
    
}