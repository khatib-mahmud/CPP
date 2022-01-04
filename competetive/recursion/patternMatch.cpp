
#include <bits/stdc++.h>
using namespace std;
 
void NaiveSearch(string txt, string pat)
{
        int p = pat.size()-1;
        int t = txt.size()-1;
    
    for (int i = 0; i <= t-p; i++)
    {
        int j;
        for (j = 0; j < p; j++)
            if(txt[j+i]!=pat[j])
            break;
        
        if(j==p)
         cout<<"index :"<<i<<endl;       

        
    }
    
}
int main()
{
    string txt ;
    string pat ;
    cin>>txt>>pat;
    NaiveSearch(txt, pat);
}
 