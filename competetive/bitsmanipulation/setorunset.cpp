#include<bits/stdc++.h>
using namespace std;
vector <int> binarybit;
void printBinary(unsigned long long int num){
    int copy = num;
    
    while(num>0){
        binarybit.push_back(num%2);
        num=num/2;
    }
    for (int i = binarybit.size()-1; i >= 0;i--)
    cout<<binarybit[i];

    cout<<endl;

    // for (int i = 10; i >=0; i--)
    // {
    //     cout<<((copy>>i) & 1);
    // }
    // cout<<endl;
    
}

int main(){
    printBinary(9);
    int a = 9;
    int i = 3;
    
    
    if(a & (1<<i) != 0)
    cout<<"set bit"<<endl;
    else
    cout<<"unset bit"<<endl;

}