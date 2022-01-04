
#include <bits/stdc++.h>
using namespace std;

// 1. Fibonacci

// int fib(long long int n){
//     if (n==0)
//     return 0;
//     if (n==1)
//     return 1;
//     long long int ans = fib(n-1) + fib(n-2);
//     return ans;

// }

// int main(){
//     int n;
//     cin>>n;
    
//     for(long long int i=0;i<n;i++)
//     {
//         cout<<fib(i)<<endl;

//     }
// }

// 2. problem1- reverse

// void prev(int i, int *a, int n){
//     if(n>i)
//     {
//         prev(i+1, a, n);
//         cout<<a[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)cin>>a[i];
//     prev(0, a, n);
// }

// 3.[0] [n-1] [1] [n-2] ......... ......... [(n-1)/2] [n/2]
//  void ultapalta(int i, int n, int *a){
//      if(i<=n){
//          cout<<a[i]<<" "<<a[n]<<endl;
//          ultapalta(i+1, n-1, a);
//      }
//  }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)cin>>a[i];
//     ultapalta(0, n-1, a);
// }

// 4. remove all odd
//  void oddrmv(int i, int j, int *a, int *n){
//      if(i==*n){
//              *n = j;
//              return;

//     }

//     if(a[i]%2==0)
//     a[j++] = a[i];
//     oddrmv(i+1, j, a, n);

// }

// int main(){
//     int n;cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     oddrmv(0, 0, a, &n);

//     for(int i =0;i<n ;i++)
//     cout<<a[i]<<" ";
// }

// 5. Polynominal 1 +x +x^2 + .... +x^n-1
//  void poly(int i, int n){
//      if(i==n){
//          return;
//      }
//      if(i==0)cout<<1;
//      if(i==1)cout<<" +x";
//      if(i>1)cout<<" +x^"<<i;
//      poly(i+1, n);

// }

// int main(){
//     int n;
//     cin>>n;
//     poly(0 ,n);
// }

// 6. Polunominal Sum
//  int poly_sum(int i, int n, int x)
//  {
//      if(n==0)
//          return 1;
//      if(i<n)
//          return pow(x, i) + poly_sum(i+1, n, x);
//      return 0;

// }
// int main(){
//     int x, n;
//     cin>>x>>n;
//     int ans =  poly_sum(0 , n, x);
//     cout<<ans;
//  }
// 7. n!
// int fact(int n)
// {
//     if(n==0|| n ==1)
//     return 1;
//     return n * fact(n-1);
// }
// int main(){
//     int n;cin>>n;
//     int ans = fact(n);
//     cout<<ans;

// }

// 8. nth fibonacci
//  int fib(int n){
//      if(n<3)
//      return 1;
//      return fib(n-1)+fib(n-2);
//  }

// int main(){
//     int n;
//     cin>>n;
//     int ans=  fib(n-1);
//     cout<<ans;
// }

// 9. prime out

