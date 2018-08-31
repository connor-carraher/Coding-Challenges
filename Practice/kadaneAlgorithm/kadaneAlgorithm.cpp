# include <iostream>
# include <vector>

using namespace std;

int MaxSubArraySum(vector<int> a, int size)
{
    int overallMax = 0;
    int currentMax = 0;

    for(int i = 0; i < size; ++i)
    {
        currentMax += a[i];

        if(currentMax < 0)
        {
            currentMax = 0;
        }
        if(overallMax < currentMax)
        {
            overallMax = currentMax;
        }
    }

    if(overallMax == 0)
    {
        overallMax = a.max();
    }
    
    return overallMax;
}

int main()
{
    int num, curr;
    vector<int> a;

    cout << "How many numbers do you want in the array:" << endl;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cout << "Enter a number to add to the list:" << endl;
        cin >> curr;
        a.push_back(curr);
    }

    int max_sum = MaxSubArraySum(a, a.size());
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}