# include<stdio.h>
# include<stdlib.h>
# include<iostream>

using namespace std;
 
int maxDivide(int a, int b)
{
  while (a%b == 0)
   a = a/b; 
  return a;
}    
 
int isUgly(int num)
{
  num = maxDivide(num, 2);
  num = maxDivide(num, 3);
  num = maxDivide(num, 5);
   
  return (num == 1)? 1 : 0;
}    
 
int getUgly(int num)
{
  int i = 1, count = 1;  

  while (count < num)
  {
    i++;      
    if (isUgly(i))
    {
      count++; 
    }
  }
  return i;
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
