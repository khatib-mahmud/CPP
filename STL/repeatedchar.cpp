#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
   
    cin>>t;
    while (t--)
    {
        map<char, int> mp;
        
        
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (auto i : mp)
        {
            cout << i.first << " " << i.second << endl;
        }

        // for (map<char, int>:: iterator it= mp.begin(); it !=mp.end() ; it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        
        
    }
}