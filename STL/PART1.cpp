#include<bits/stdc++.h>
using namespace std;
int main(){
   while(1){
       char c[1000];
       gets(c);
       
       for (int i = 0; i < 1000; i++)
       {
           if(c[i] == ' ')
            c[i] ='\n';
           if(c[i]>='a' || c[i]<='z')
            c[i] = c[i]+32;
       }
    cout<<c;
       
       
   }
}
