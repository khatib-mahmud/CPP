#include <bits/stdc++.h>
using namespace std;
vector<string> valid;
void gen(string s, int open, int close){
    if(open==0 && close==0){
        valid.push_back(s);
        return;
    }
    if(open>0){
        s.push_back('(');
        gen(s, open-1, close);
        s.pop_back();
    }
     if(close>0 && open<close){
        s.push_back(')');
        gen(s, open, close-1);
        s.pop_back();
    }

}

int main()
{
    int n;
    cin >> n;
    string s;
    gen(s, n, n);
    for (auto i: valid)
    {
        cout << i << endl;
    }
}