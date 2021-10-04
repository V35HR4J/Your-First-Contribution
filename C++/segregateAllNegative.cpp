// Problem Statement -  Move all negative numbers to beginning and positive to end with constant extra space

// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

// Examples : 

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5
// Note: Order of elements is not important here.
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int left,int right){
    // function to swap two locations in the array

    int temp;
    temp=arr[right];
    arr[right]=arr[left];
    arr[left]=temp;
    return;
}
// the algorithm is inspired from dutch national flag algorithm 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=n-1; // two pointers is used ,left to  mark the limit of all negative numbers and right to  mark the unknown numbers
    while(left<=right){
        if(arr[left]<0)
        left++; // if left is negative simply increment left else else swap with right 
        else
        {
            swap(arr,left,right);
            right--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" "; // finally print the array element 
    cout<<endl;
    return 0;
}