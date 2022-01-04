#include<bits/stdc++.h>
using namespace std;
//#define ll long long
class symbolInfo{
private:
    string name;
    string type;
public:
    symbolInfo(){
    }

};

int main()
{
    symbolInfo ** a  = new symbolInfo() ;

}

unsigned long hash_function(char* str) {
    unsigned long i = 0;
    for (int j=0; str[j]; j++)
        i += str[j];
    return i % CAPACITY;
}
