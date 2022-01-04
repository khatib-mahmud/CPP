#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int sum = 0;
        string alp;cin>>alp;
        string s;cin>>s;
        vector <int> v;
        for(int i=0;i<=alp.length();i++)
        {
            for (int j = 0; j <= s.length(); j++)
            {
                if(s[j] == alp[i])    
                    v.push_back(i+1);    
          }    
        }
        for(int i=0;i<v.size()-1;i++ )
        sum = sum + abs(i - (i+1));
        cout<<sum<<endl;
    }
}