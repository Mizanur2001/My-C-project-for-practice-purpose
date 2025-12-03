#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // Brute Force
// int secondSmalestElemnt(vector<int> arr)
// {
//     if (arr.size() == 1 || arr.size() == 0)
//     {
//         return -1;
//     }
//     sort(arr.begin(), arr.end());
//     return arr[1];
// }

// int secondLargestElemnt(vector<int> arr)
// {
//     if (arr.size() == 1 || arr.size() == 0)
//     {
//         return -1;
//     }
//     sort(arr.begin(), arr.end());
//     return arr[arr.size() - 2];
// }

// Optimal Approach
int secondSmalestElemnt(vector<int> arr)
{
    if (arr.size() < 2)
    {
        return -1;
    }
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int secondLargestElement(vector<int> arr)
{
    if (arr.size() < 2)
    {
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
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

    cout << "\nSecond Smalest Number is " << secondSmalestElemnt(arr);
    cout << "\nSecond Largest Number is " << secondLargestElement(arr);
    return 0;
}