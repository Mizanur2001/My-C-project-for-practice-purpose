#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArr(vector<int> arr, int k)
{
    vector<int> nums(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        nums[(i+k+1)%arr.size()] = arr[i];
    }
    return nums;
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;
    arr = rotateArr(arr, k);
    for (int a : arr)
    {
        cout << a << " ";
    }
}