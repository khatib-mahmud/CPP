#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void generate(int open, int close, string &s)
{
    if (open == 0 && close == 0)
    {
        v.push_back(s);
        return;
    }

    if (open > 0)
    {
        s.push_back('(');
        generate(open - 1, close, s);
        s.pop_back();
    }
    if (close > 0 && open < close)
    {
        s.push_back(')');
        generate(open, close - 1, s);
        s.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    string s = "";
    generate(n, n, s);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}