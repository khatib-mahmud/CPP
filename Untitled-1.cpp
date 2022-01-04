#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[999], s[200], ss[200];
    int j = 0;
    cout << "enter multi_line" << endl;
    scanf("%[^~]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
      if(str[i] == '/' && str[i + 1] == '*')
        {
            int k=0;
            i = i + 2;
            while (str[i] != '*' && str[i + 1] != '/')
            {
                ss[k++] = str[i++];
            }
        }

    } 
    

    cout << "comments: " << endl;
    cout << ss << endl;
 
}
