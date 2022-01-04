#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int v= 0, c =0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        v++;
        else if(s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        v++;
        else
        c++;
    }
    cout<<"vowel: "<<v<<endl;
    cout<<"consonent: "<<c<<endl;
    
}

