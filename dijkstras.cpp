#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t ;cin>>t;
   while(t--)
   {
       int n ,k,c=0,v=1,sum = n;
       cin>>n>>k;

       while(sum%k==0)
       {
        for(int i =0;i<n;i++)
        sum=sum+v;
        if(sum%k!=0)
            v++;
        else
            break;
       }
       cout<<v<<endl;

   }
}
