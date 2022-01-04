#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

int main(){

    
    int vertex;
    cin>>vertex;
    int edges;
    cin>>edges;
    vector<int> adj[vertex+1];
    for (int i = 0; i < edges; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    for(int i =1;i<=vertex;i++){
        
        cout<<i<<"-> ";
        for(int j=0; j<adj[i].size(); j++){
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<"F"<<endl;
    for(int i=1;i<=vertex;i++){
        cout<<i<<"- ";
        for(auto j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}