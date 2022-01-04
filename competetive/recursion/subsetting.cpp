#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;

void generate(vector<int> &subset, int i, vector<int> num)
{

    if (i == num.size())
    {
        subsets.push_back(subset);
        return;
    }

    generate(subset, i + 1, num);

    subset.push_back(num[i]);
    generate(subset, i + 1, num);
    subset.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<int> empty;
    generate(empty, 0, num);

    for (int i = 0; i < subsets.size(); i++)
    {
        for (int j = 0; j < subsets[i].size(); j++)
        {
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }
}