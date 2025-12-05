#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int sum(vector<int> arr)
{
    int sum = 0;
    for (int a : arr)
    {
        sum += a;
    }
    return sum;
}

// Optimal
int optSum(vector<int> arr)
{
    return accumulate(arr.begin(), arr.end(), 0);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int i = 0;
    while (i < n)
    {
        cin >> arr[i++];
    }

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << "\nSum is " << sum(arr);
    cout << "\nSum Opt is " << optSum(arr);
}