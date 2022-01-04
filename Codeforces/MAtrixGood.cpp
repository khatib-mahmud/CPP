#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1000;
int grid[maxn][maxn];
int main(){
    int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) {
        int x; cin >> x;
        if(grid[i][j] == 0 &&(i == n/2 + 1 || j == n/2  + 1 ||  i == j || i+j == n+1)) {
                grid[i][j] = x;
                sum += x;
        }
    }
    cout << sum << endl;
}
