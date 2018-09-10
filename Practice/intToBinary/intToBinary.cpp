# include <iostream>
# include <stack> 

using namespace std;

//int SIZE = 8;

/*void printBinary(int num)
{
    int curr = num;
    int a[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        a[i] = 0;
    }

    while(curr > 0)
    {
        int count = 0;
        int value = 1;
        while(value < curr)
        {
            value *= 2;
            if(value <= curr)
                count++;
        }

        if(count == 0)
        {
            a[0] = 1;
            break;
        }

        a[count] = 1;
        curr -= value;
    }

    for(int i = SIZE - 1; i >= 0; i--)
    {
        cout << a[i];
    }
} */

void printBinary(int num)
{
    stack <int> bin; 
    
    while(num > 0)
    {
        bin.push(num % 2);
        num /= 2;
    }

    while(!bin.empty())
    {
        cout << bin.top();
        bin.pop();
    }
}

int main(){
    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    printBinary(num);
}

