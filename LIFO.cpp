#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> v;
        v.push_back(s[0]);
        for(ll i = 1;i<n;i++)
        {
            if(s[i]!=s[i-1])
                v.push_back(s[i]);
        }
        n = v.size();
        map<char,ll> m;
        bool bol = false;
        for(ll i = 0;i<n;i++)
        {
            if(m[v[i]]!=0)
                bol = true;
            else
                m[v[i]] = 1;
        }
        if(bol)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
