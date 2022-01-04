#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1,s2 = "";
        cin>>s1;
        string out = "YES";
        int index;

        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] =='d'){
            index = i;   
            break;
            }
            
        }
        
        
        for (int i = index+1; i < s1.length(); i++)
        {
            s2  += s1[i]; 
        }
        

        // for (int i = 0; i < n; i++)
        // {
        //     if(s1[i]=='1' && s2[i]=='1')
        //     {
        //         out = "NO";
        //     }
                  
        // } 
        cout<<s2<<endl; 
    }  
}
