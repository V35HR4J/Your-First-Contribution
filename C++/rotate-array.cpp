#include <iostream>
using namespace std;
void reverese(int arr[], int l, int r)
{
    
    while(l<r){
   int temp=arr[l];
   arr[l]=arr[r];
   arr[r]=temp;
    l++;
    r--;
        
    }
}
void rotate(int arr[], int n, int k)
{
    reverese(arr,0,n-1);
    // reverese(arr,0,(n-(k-1)));
     reverese(arr,n-k,n-1);
     reverese(arr,0,((n-1)-k));
       
    
}

int main() { 
    int t;
    cin>>t;
    while(t--)
    {
	int n,k;
    cin>>n>>k;
	int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    
    rotate(arr,n,k);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    }
	return 0;
}
