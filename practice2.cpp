#include <bits/stdc++.h>
using namespace std;
queue<int> Queue, Queue1;
struct state
{
 int puzzle[3][3];  //Changed the size to 3 from 2
};
void FrontToLast(queue<int>& q, int qsize)
{

    if (qsize <= 0)
        return;
    q.push(q.front());
    q.pop();
    FrontToLast(q, qsize - 1);
}
void pushInQueue(queue<int>& q, int temp, int qsize)
{
    if (q.empty() || qsize == 0) {
        q.push(temp);
        return;
    }
    else if (temp <= q.front()) {
        q.push(temp);
        FrontToLast(q, qsize);
    }
    else {
        q.push(q.front());
        q.pop();
        pushInQueue(q, temp, qsize - 1);
    }
}
void sortQueue(queue<int>& q)
{
    if (q.empty())
        return;
    int temp = q.front();
    q.pop();
    sortQueue(q);
    pushInQueue(q, temp, q.size());

}

int main()
{
int n, part;
cout << "Enter the number of grid/obj : ";
cin >> part;
cout << "Enter number of matrix line both raw and column : ";
cin >> n;
state p, goal;
p.puzzle[n][n];
goal.puzzle[n][n];



    cout << "-----> Enter the matrix :  <------------\n";
    for(int k=1; k<=part; k++)
    {
        for(int i = 0; i < n; i++)  //Needs loop for assigning the values
        {
            for(int j = 0; j < n; j++)
            {
                 cin >> p.puzzle[i][j];
                 Queue.push(p.puzzle[i][j]); // Using push and cannot directly use p
            }
        }
    }

    printf("-----> Enter the goal matrix :  <------------\n");
    for(int a=1; a<=part; a++)
        {
            for(int i = 0; i < n; i++)  //Needs loop for assigning the values
            {
                for(int j = 0; j < n; j++)
                {
                     cin >> goal.puzzle[i][j];
                     Queue1.push(goal.puzzle[i][j]); // Using push and cannot directly use p
                }
            }
        }

    while(!Queue.empty())
    {
//        boolean goalstatus=false;
//        s=Queue.pop();
//        checkgoal(s.matrix, goal.puzzle);
//        if(goalstatus==true){
//            printf("Found goal\n");
//            break;
//        }

         if(sortQueue(Queue)==sortQueue(Queue1)){
            printf("Found goal\n");
         }
         else{
            Queue.pop();
         }
    }
    return 0;
}
