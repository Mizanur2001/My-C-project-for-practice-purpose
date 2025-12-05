#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

float median(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    if (arr.size() % 2 == 0)
    {
        for (int a : arr)
        {
            cout << a << " ";
        }
        cout << endl;
        cout << arr[arr.size() / 2] << endl;
        return (float)(arr[arr.size() / 2] + arr[(arr.size() / 2) - 1]) / 2;
    }
    else
    {
        return arr[arr.size() / 2];
    }

    return -1;
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

    // for (int a : arr)
    // {
    //     cout << a << " ";
    // }

    cout << endl;
    cout << median(arr);

    return 0;
}