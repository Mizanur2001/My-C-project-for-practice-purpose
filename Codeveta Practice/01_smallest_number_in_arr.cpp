#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force
// int smalestNumber(vector<int> arr)
// {
//     sort(arr.begin(), arr.end());
//     return arr[0];
// }

// Optimal Approach
int smalestNumber(vector<int> arr)
{
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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

    cout << "\nSmallest Element is " << smalestNumber(arr);
    return 0;
}