#include <bits/stdc++.h>
using namespace std;
string reverse(string s)
{
	string rs = "";

	for (int i = s.length() - 1; i >= 0; --i)
	{
		rs = rs + s[i];
	}
	return rs;
}
void palindrome(string s){
	
	if(s == reverse(s))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

}

void occur(string &s){
	map<char, int> mp;
	for (int i = 0; i < s.size(); i++)
	{
		mp[s[i]]++;
	}
	map<char, int>::iterator i;
	for ( i = mp.begin(); i != mp.end(); i++)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}
	

}

int main()
{
	string s;
	// cin >> s;
	
	// cout<<reverse(s)<<endl;
	// palindrome(s);

	// occur(s);
	

}
