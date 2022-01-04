#include <bits/stdc++.h>
using namespace std;
void display();
class state
{
public:
    int matno;
    int ptno;
    int grid[3][3];
};
queue<state> q,tempq;
int main()
{
    int solgrid[3][3] = {{1,2,3},{4,5,6},{7,8,0}};
    while(1)
    {
        string s;
        cout<<""<<endl;
        cout<<" press 1 to push "<<endl;
        cout<<" press 2 to pop "<<endl;
        cout<<" press 3 to find solution matrix number"<<endl;
        cout<<"--------*---------";
        cout<<endl;
        int option;
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"how many objects do you want to add in your queue?"<<endl;
            int n;
            cin>>n;
            cout<<"give them --> "<<endl;
            for(int i =1; i<=n; i++)
            {
                state obj;
                int y;
                cout<<"parent no: ";
                cin>>y;
                obj.matno = i;
                obj.ptno  = y;
                cout<<"full grid: "<<endl;
                for(int i =0; i<3; i++)
                {
                    for(int j =0; j<3; j++)
                    {
                        cin>>obj.grid[i][j];
                    }
                }
                q.push(obj);
            }
            break;
        case 2:
            if(q.empty())
                cout<<"no elements to pop"<<endl;
            else
            {
                q.pop();
                cout<<"Pop done"<<endl;
            }
            cout<<endl;
            break;
        case 3:
            int flag;
            while(!q.empty())
            {
                flag = 0;
                for(int i =0; i<3; i++)
                {
                    for(int j =0; j<3; j++)
                    {
                        if(q.front().grid[i][j]!=solgrid[i][j])
                            flag =1;
                    }
                    if(flag==0)
                        break;
                }
                if(flag==0)
                    break;
                q.pop();
            }
            if(flag==0)
                cout<<" solution matrix number :"<<q.front().matno<<endl;
            else
                cout<<"no solution"<<endl;

            break;
        case 4:
            display();
            break;
        default:
            cout<<"wrong!";
            break;

        }
    }
}

void display()
{
    cout<<"Your objects: "<<endl;
    while(!q.empty())
    {
        cout<<"Matrix number: "<<q.front().matno<<endl;
        cout<<"Parent number: "<<q.front().ptno<<endl;
        cout<<"the matrix"<<endl;
        for(int i =0; i<3; i++)
        {
            for(int j =0; j<3; j++)
                cout<<q.front().grid[i][j]<<" ";
            cout<<endl;
        }
        q.pop();
        cout<<endl;
    }
}

