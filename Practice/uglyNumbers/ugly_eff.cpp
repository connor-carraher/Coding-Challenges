# include<stdio.h>
# include<stdlib.h>
# include<iostream>

using namespace std;

int getUgly(int n)
{
    int ugly[n];
    int i2 = 0, i3 = 0, i5 = 0;
    int nextMult2 = 2;
    int nextMult3 = 3;
    int nextMult5 = 5;
    int nextUglyNum = 1;
 
    ugly[0] = 1;
    for (int i=1; i<n; i++)
    {
       nextUglyNum = min(nextMult2, min(nextMult3, nextMult5));

       ugly[i] = nextUglyNum;
       if (nextUglyNum == nextMult2)
       {
           i2 = i2+1;
           nextMult2 = ugly[i2]*2;
       }
       if (nextUglyNum == nextMult3)
       {
           i3 = i3+1;
           nextMult3 = ugly[i3]*3;
       }
       if (nextUglyNum == nextMult5)
       {
           i5 = i5+1;
           nextMult5 = ugly[i5]*5;
       }
    }
    return nextUglyNum;
}

int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    int answer = getUgly(num);
    cout << "Ugly number at index " << num << " is " << answer << endl;
    return 0;
}