#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int element){
    int lo = 0,hi = v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid = lo + (hi-lo)/2;
        if(v[mid]<element)
        lo = mid+1 ;
        else
        hi = mid ;
    }
    if(v[lo]>=element)
        return lo;
    if(v[hi]>=element)
        return hi;
    else
    return -1;

}

int main(){
    //  int n;cin>>n;
    // vector <int> v(n);
    // for(int i=0;i<n;i++)cin>>v[i];

    // int el;cin>>el;
    // int lb = lower_bound(v,el);
    // cout<<lb<<" "<<v[lb]<<endl;
    
    int a[10];
    cout<<a<<endl;
    cout<<a+10<<endl;



    // int8_t a=200;
    // cout<<(int)a;
    // uint8_t b=100;
    // cout<<(int)b;

}

