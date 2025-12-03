#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // Brute Force
// int findLargestElement(vector<int> arr)
// {
//     sort(arr.begin(), arr.end());
//     return arr[arr.size() - 1];
// }

//Optimal Approach
int findLargestElement(vector<int> arr)
{
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << "\nLargest Element is " << findLargestElement(arr);
    return 0;
}