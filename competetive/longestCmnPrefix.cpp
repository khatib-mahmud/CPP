#include <bits/stdc++.h>
using namespace std;
void printVec(vector<string> &s){
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    
}
string sol(vector<string> &s){
    int c =0;
    sort(s.begin(),s.end());
    int m = s.size();
    string first = s[0];
    for (int i = 0; i < s[0].length(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(s[j][i]!=first[i])
            return first.substr(0,c);
            
        }
        c++;
        
    }
    return first.substr(0, c);


}

int main()
{
    vector<string> s = {"finland", "gone", "dest"};
    cout<<sol(s);

   

}