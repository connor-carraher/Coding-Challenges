# include <iostream>
# include <vector>

using namespace std;

int MaxSubArraySum(vector<int> a, int size)
{
    int currMax = 0;
    int lastMax = 0;

    for(int i = 0; i < size; ++i)
    {
        lastMax += a[i];

        if(lastMax > currMax)
        {
            currMax = lastMax;
        }
        else if (a[i] > currMax)
        {
            currMax = a[i];
            lastMax = a[i];
        }
    }
    return currMax;
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