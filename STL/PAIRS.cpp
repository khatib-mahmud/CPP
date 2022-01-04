#include <bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int, string>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{
    // pair<int, string> p1, &p2 = p1, parr[4];
    // // p1.first = 2;
    // // p1.second = "nonnny";

    // p1 = {4, "granny"};

    // p2.first = 10;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;

    // parr[0] = {1, "a"};
    // parr[1] = {131, "b"};
    // parr[2] = {15, "c"};

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<parr[i].first<<" "<<parr[i].second<<endl;
    // }
    int n;
    cin >> n;
    vector<pair<int, string>> vp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        vp.push_back({x, s});
    }
    printVec(vp);

    vector<pair<int, string>> &vp2 = vp;
    vp2[0].first = 14;

    printVec(vp2);

}