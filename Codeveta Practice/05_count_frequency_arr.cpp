#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void countElement(vector<int> arr)
{
    unordered_map<int, int> count;

    for (int a : arr)
    {
        count[a]++;
    }

    for (auto p : count)
    {
        cout << p.first << "-->" << p.second << endl;
    }
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
    cout << endl;

    countElement(arr);
}