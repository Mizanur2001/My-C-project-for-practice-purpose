#include <iostream>
#include <vector>
using namespace std;

float avarageArr(vector<int> arr)
{
    float avag;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    avag = (float) sum / arr.size();
    return avag;
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
    cout << avarageArr(arr);
}