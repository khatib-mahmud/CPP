#include<bits/stdc++.h>
using namespace std;
void NGE(vector<int> v){
    vector<int> nge;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size() ; j++)
        {
            if(nge[i]<nge[j])
            nge.push_back(nge[j]);
            else
            nge.push_back(-1);
        }
        
        
    }
    for (int i = 0; i < nge.size(); i++)
    {
        cout<<v[i]<<" "<<nge[i]<<endl;
    }
        

}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    NGE(v);

}