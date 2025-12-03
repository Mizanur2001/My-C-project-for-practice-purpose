#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (end > start)
    {
        swap(arr[start++], arr[end--]);
    }
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

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << "\nArray Afetr Reverse" << endl;

    arr = reverseArray(arr);
    for (int a : arr)
    {
        cout << a << " ";
    }
}