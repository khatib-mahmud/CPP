#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,j,a,b,c,k;
    int d[1000001]={};
    for(i=1;i<=1000000;i++)
    for(j=i;j<=1000000;j+=i)
    ++d[j];
    long long int sum=0,m=1073741824;
    cin>>a>>b>>c;
    for(i=1;i<=a;i++)
    for(j=1;j<=b;j++)
    for(k=1;k<=c;k++)
    sum+=d[i*j*k];
    cout<<sum;
    return 0;
}