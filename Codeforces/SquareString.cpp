#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, temp1, temp;
        bool ok = true;
        cin >> s;
        int half = s.size() / 2;
        if (s.size() % 2 == 0)
        {
            for (int i = 0; i < half; i++)
            {
                if (s[i] != s[half + i])
                    ok = false;
                
            }
        }
        else
            ok = false;
 
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
}