#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min = *min_element(v.begin()+3,v.end());
    cout<<min<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;

    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    

    int c = count(v.begin(),v.end(),3);
    cout<<c<<endl;

    reverse(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    
    
}