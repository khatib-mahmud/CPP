#include <bits/stdc++.h>
using namespace std;

int sum(int *a, int index)
{
    if(index==-1) return 0;
     return sum(a, index-1)+ a[index]; 
    
}

int main()
{
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    
    cout<<sum(a, n-1);
}