#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a[3],br;
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]%2==0 && a[1]==a[2]|| a[1]%2==0 && a[0]==a[2]||a[2]%2==0 && a[0]==a[1])
        cout<<"YES"<<endl;
        else if(a[0]==a[1]+a[2] || a[1] == a[0]+a[2] || a[2] == a[0]+a[1])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}