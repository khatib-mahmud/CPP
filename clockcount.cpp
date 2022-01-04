#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,sum=0;
        cin>>n;
        int a[n];
        for(int i =0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int i =0; i<n; i++)
        {
            sum+=a[i];

            if(a[i]!=0)c++;

        }
        cout<<sum + c-1<<endl;
    }


}
