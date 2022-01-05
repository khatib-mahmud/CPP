#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set <int> s;
        int n;cin>>n;
        for (int i = 1; i*i <= n; i++)
        s.insert(i*i);
        for (int i = 1; i*i*i <= n; i++)
        s.insert(i*i*i);
        
        cout<<s.size()<<endl;
    }
}