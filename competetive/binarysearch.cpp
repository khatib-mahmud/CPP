#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
        cin>>v[i];

    int el;
    cin>>el;
    int hi = n-1;
    int lo = 0;

    while (hi-lo>1)
    {
        int mid = lo + (hi-lo)/2;
        if(v[mid]>el)
        hi = mid;
        else
        lo = mid+1;
    }
    if(v[hi]==el)
    cout<<hi<<endl;
    else if(v[lo]==el)
    cout<<lo<<endl;
    else
    cout<<-1<<endl;
    


}
