#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,m,MIN=999999999;
    cin>>n>>m;
    for(int i=0; i<m; i++)
        cin>>a[i];
    sort(a,a+m);
    int j = n-1;
    for(int i = 0; j<m; i++)
    {
        if(a[j]-a[i]<MIN)
            MIN=a[j]-a[i];
        j++;
    }
    cout<<MIN<<endl;

}
