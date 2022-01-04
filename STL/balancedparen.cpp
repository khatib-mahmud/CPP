#include<bits/stdc++.h>
using namespace std;

unordered_map <char, int> um ={{'[', -3}, {'{', -2}, {'(', -1},{']', 3}, {'}', 2}, {')', 1}};


string isBalanced(string s){
  stack<char> st;
  for (int i = 0; i < s.size(); i++)
  {
      if(um[s[i]]<0)
      st.push(s[i]);
      else{
          if(st.empty())return "NO";
          char temp = st.top();
          if(um[temp]+um[s[i]]==0)
          return "YES";
          else
          return "NO";
      }
  }
  if(st.empty())
  return "YES";
  else
  return "NO";
  
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
      
        
    }
    
}

