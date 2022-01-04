#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int f=0;
   string s,ss;
   cin>>n;
   while(n--)
   {
       cin>>s;
       ss=ss+s+"\n";
   }
   f = ss.find("OO");
   if(f>0){
    ss.replace(f,2,"++");
    cout<<"YES"<<endl;

   }
   else
    cout<<"NO"<<endl;





}
