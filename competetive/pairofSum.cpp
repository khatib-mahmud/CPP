#include <bits/stdc++.h>
using namespace std;
int i, j;
int * getpair(int a[], int target)
{
    static int r[3];
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
           if( a[i] + a[j] == target){
            // cout << a[i] << " " << a[j] << endl;
            r[0] = a[i], r[1]= a[j];
            return r;
           }
        }       
    } 
    return r;   
}

int main()
{
    int a[] = {1, 3, 4, 5};
    int target = 8;
    // cin>>target;
    // for (int i = 0; i < n; i++)
    //     cin>>a[i];
    int *p = getpair(a, target);   

    for (int i = 0; i < 2; i++)
    {
        cout<p[i]<<" ";
    }
    
    
}