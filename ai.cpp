#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q,tempq;


    while(1)
    {
        string s;
        cout<<""<<endl;
        cout<<" press 1 to push "<<endl;
        cout<<" press 2 to pop "<<endl;
        cout<<"--------*---------";
        cout<<endl;
        int option;cin>>option;
        switch(option){

    case 1:
        cout<<"how many element do you want to add in your queue?"<<endl;
        int n;cin>>n;
        cout<<"give them -->";
        while(n--)
        {
            cin>>s;
            q.push(s);
        }
        cout<<"Your Queue: ";
         while(!q.empty())
            {
                cout<<" "<<q.front();
                tempq.push(q.front());
                q.pop();
            }
            cout<<endl;
       while(!tempq.empty())
        {

            q.push(tempq.front());
            tempq.pop();
        }

        cout<<endl;
        break;

    case 2:

        if(q.empty())
            cout<<"no elements to pop"<<endl;
        else{
                cout<<"how many wants to pop?:";
        int m;cin>>m;
        while(m--){

        q.pop();
        }
        cout<<"Your Queue: ";
        while(!q.empty())
            {
                cout<<" "<<q.front();
                tempq.push(q.front());
                q.pop();
            }
            cout<<endl;
       while(!tempq.empty())
        {

            q.push(tempq.front());
            tempq.pop();
        }
        cout<<endl;


    cout<<"Pop done"<<endl;
        }

        break;
    default:
        cout<<"wrong!";
        break;
        }
    }

}
