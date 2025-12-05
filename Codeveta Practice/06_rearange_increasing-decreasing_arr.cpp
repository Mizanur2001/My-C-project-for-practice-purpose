#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeArr(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    reverse(arr.begin() + arr.size() / 2, arr.end());
    return arr;
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

    arr = rearrangeArr(arr);

    for (int a : arr)
    {
        cout << a << " ";
    }

    return 0;
}