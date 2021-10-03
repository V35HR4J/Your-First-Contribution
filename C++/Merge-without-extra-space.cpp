/**
 * code by : gursimran18
 * Given two sorted arrays of size N and M. 
 * Merge the two arrays into one sorted array in non-decreasing order 
 * without using any extra space.
 * eg ar1[]= {1,3,5} ar2[]= {2, 4, 8}
 * OUTPUT: {1,2,3,4,5,8}
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//function for merging in O(1) space
void merge(vector<int>&a1,vector<int>&a2, int n, int m) 
{
    int i,j;
    int p1=n-1,p2=0;
    while(p1>=0 && p2<m)
    {
        if(a1[p1]>a2[p2])    
        {
            swap(a1[p1],a2[p2]);
            p1--;
            p2++;
        }
        else
        {
            break;
        }
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
}

int main() 
{  
    cout<<"Enter size of both arrays:\n";
    int n, m, i;
    cin >> n >> m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    cout<<"Enter "<<n<<" elements of first array:\n";
    for (i = 0; i < n; i++) 
    {
        cin >> arr1[i];
    }
    cout<<"Enter "<<n<<" elements of second array:\n";
    for (i = 0; i < m; i++) 
    {
        cin >> arr2[i];
    }
    //function to merge these two sorted arrays in O(1) space
    merge(arr1, arr2, n, m);
    for (i = 0; i < n; i++) 
    {
        cout << arr1[i] << " ";
    }
    for (i = 0; i < m; i++) 
    {
    cout << arr2[i] << " ";
    }
    cout << "\n";
    return 0;
}
    
