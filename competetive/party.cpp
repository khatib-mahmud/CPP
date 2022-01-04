#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n, a, b, c;
       cin>>a>>b>>c;
       ll half = abs(a-b);

       n = 2*half;

      
       if(a>n || b>n || c>n )
       cout<<-1<<endl;
       else if(half<c)
       cout<<c - half<<endl;
       else
       cout<<c+half<<endl;
        

    }
}