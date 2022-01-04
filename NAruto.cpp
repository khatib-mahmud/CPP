#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while (t--)
    {
        long long a[3];
        cin>>a[0]>>a[1]>>a[2];
        long long  mx = max(a[2],max(a[0],a[1]));
        // int mn1 = mx-min(a[0],a[1]);
        // int mn2 = mx-min(mn1,a[2]);
        cout<<mx+1-a[0]<<" "<<mx+1-a[1]<<" "<<mx+1-a[2]<<endl;        

    }
    
}

