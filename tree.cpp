#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        
      int l,r;
      cin>>l>>r;
      if(l<(r/2)+1)
        cout<<r%((r/2)+1)<<endl;
      else
        cout<<r%l<<endl;
        
    }
 
}
