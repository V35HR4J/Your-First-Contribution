#include<iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void dnf(int arr[], int n)
{
    int low=0, mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }

        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr, mid, high);
            high--;
        }
    }
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dnf(arr, n);
    display(arr, n);
}