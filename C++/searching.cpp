// First question
// find a given key in array
// O(n)

#include <iostream>
using namespace std;
int oup()
{
    cout << "not fonud";
    return 0;
}
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return oup();
}
int main()
{
    int n;
    cout << "Enter no. of elements in array";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array is " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    int key;
    cout << "User pls enter key:  ";
    cin >> key;

    cout << linearSearch(arr, n, key) << endl;
    return 0;
}