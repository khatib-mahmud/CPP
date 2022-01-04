#include<bits/stdc++.h>
using namespace std;
int main(){
    int fact =1 ;
    int mod ;
    cin>>mod;
    for (int i = 1; i <= 100; i++)
    {
        fact = ((fact%mod) * (i%mod))%mod;
    }
    
    cout<<fact;
   
}