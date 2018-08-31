//Implement a queue using two stacks

# include <stack>
# include <iostream>
# include "stdlib.h"

using namespace std;

stack<int> front;
stack<int> back;

void enqueue(int num)
{
    front.push(num);

    cout << "Enqueued " << num << endl; 
}

void dequeue()
{
    int num;
    int deqNum;
    int frontSize = front.size();

    if(frontSize == 0)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    for(int i = 0; i < frontSize; i++)
    {
        num = front.top();
        front.pop();
        back.push(num);
    }
    deqNum = num;
    back.pop();

    for(int i = 1; i < frontSize; i++)
    {
        num = back.top();
        back.pop();
        front.push(num);
    }

    cout << "dequeued " << deqNum << endl;
}

void printQueue()
{
    int num;
    int frontSize = front.size();
    for(int i = 0; i < frontSize; i++)
    {
        num = front.top();
        front.pop();
        back.push(num);
        cout << num << " ";
    }
    cout << endl;

    for(int i = 0; i < frontSize; i++)
    {
        num = back.top();
        back.pop();
        front.push(num);
    }
}

int main()
{
    int select = 0;
    while(select != 3)
    {
        cout << "Enter 1 for enqueue, 2 for dequeue, 3 to exit, and 4 to print queue" << endl;
        cin >> select;

        if(select == 1)
        {
            int num;
            cout << "Enter a number to enqueue" << endl;
            cin >> num; 
            enqueue(num);
        }
        else if(select == 2)
        {
            dequeue();
        }
        else if(select == 3)
        {
            break;
        }
        else if(select == 4)
        {
            printQueue();
        }
        else
        {
            cout << "Only enter 1, 2, or 3" << endl;
        }
    }
}