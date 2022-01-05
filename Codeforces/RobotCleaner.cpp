#include<bits/stdc++.h>
using namespace std;
int cleaner(){
    int n,m,xr,yr,xd,yd, oneD, twoD;
    cin>>n>>m>>xr>>yr>>xd>>yd;
    if(xr<=xd)
    oneD = xd - xr;
    else
    oneD = 2*n - xr - xd;

    if(yr<=yd)
    twoD = yd - yr;
    else
    twoD = 2*m - yr - yd;

    return min(oneD, twoD);

}

int main(){
    int t;cin>>t;
    while(t--)
    cout<<cleaner()<<endl;
}