#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[999], s[200], ss[200];
    int j = 0, k = 0;
    cout << "enter multi_line" << endl;
    scanf("%[^~]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '/' && str[i + 1] == '/')
        {
            i = i + 2;
            while (i < len)
            {
                if (str[i] == '\n')
                    break;
                s[j] = str[i];
                j++;
                i++;
            }
        }s[j] = '\0';
        
      if(str[i] == '/' && str[i + 1] == '*')
        {
            i = i + 2;
            while (str[i] != '*' && str[i + 1] != '/')
            {
                ss[k++] = str[i++];
            }
        }
    ss[k] = '\0';
    } 
    

    cout << "comments: " << endl;
    cout << s << endl;
    cout << ss << endl;
}
