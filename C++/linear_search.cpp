#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{

    //example
    vector<int> arr = {5, 4, 2, 1, 3};
    int target = 1;
    cout << linearSearch(arr, target);
    return 0;
}