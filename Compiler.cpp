#include<bits/stdc++.h>
using namespace std;
class symbolinfo
{
private:
    string name;
    string type;

public:
    symbolinfo(string x,string y)
    {
        name=x;
        type=y;
        next=NULL;
    }
    void setname(string x){
        name=x;
    }
    void settype(string y){
       type=y;
    }
    string getname()
    {
        return name;
    }
    string gettype()
    {
        return type;
    }
    symbolinfo *next;

};

class scopeTable
{
public:
    symbolinfo **st;
    int capacity;


    scopeTable(int c)
    {
        capacity=c;
        st = new symbolinfo*[capacity];
        for(int i=0; i<capacity; i++)
        {
            st[i]=NULL;
        }
    }
    int HashFunc (string key)
    {
        long long int hash = 5381;
        int c;
        for(int i = 0; i < key.size(); i++)
        {
            c = key[i];
            hash = hash * 33 + c;
        }
        return hash % capacity;
    }
    symbolinfo* lookup(string name)
    {
        int index=HashFunc(name);
        symbolinfo* temp=st[index];
        while(temp!=NULL)
        {
            if(temp->getname() ==name)
            {
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
    bool insert(string name, string type)
    {
        if(lookup(name)!=NULL){
            return false;
        }
        symbolinfo*new_symbol=new symbolinfo(name,type);
        int index=HashFunc(name);
        if(st[index]==NULL){
            st[index]=new_symbol;
            return true;
        }
        else{
            symbolinfo*temp = st[index];
            while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=new_symbol;
        return true;
      }

    }

};

int main(){
    symbolinfo myobj;
    int capacity;
    cin>>capacity;
    scopeTable *myTable = new scopeTable(capacity);
    char val;
    string nm,ty;
    while(cin>>val)
    {
        cout<<val;
        switch(val)
        {
        case 'I':
            cin>>nm>>ty;
            myobj.setname(nm);
            myobj.settype(ty);
            cout<<" "<<nm<<" "<<ty<<endl;
            myTable->insert(nm,ty);
            cout<<endl<<endl;
            break;
        }
    }
}

