#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            res = max(res,a[i]-i);
        }
        cout<<res<<endl;        
    }    
}