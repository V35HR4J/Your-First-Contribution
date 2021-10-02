#include<iostream>
using namespace std;
int temp;

void heapify(int ar[] ,int size,int i)
{
    int largest=i;
    int left,right;
    left=2*i+1;
    right=2*i+2;

    if (left<size && ar[left]>ar[largest])
        largest=left;
    if (right<size && ar[right]>ar[largest])
        largest=right;
    if (largest!=i)
    {
        temp=ar[i];
        ar[i]=ar[largest];
        ar[largest]=temp;
        heapify(ar,size,largest);
    }
}

void heapsort(int ar[],int size)
{
    int i;
    for (i = size/2-1; i >= 0; i--)
    {
        heapify(ar,size,i);
    }
    for ( i = size-1; i > 0; i--)
    {
        temp=ar[0];
        ar[0]=ar[i];
        ar[i]=temp;
        heapify(ar,i,0);
    }
}

int main()
{
    int ar[10],n,i;
    cout<<"Name: Shrey Midha \nRollNo.:1816110197\n";
    cout<<"Enter the  Number of Elements:";
    cin>>n;
    cout<<"\nEnter the Array Elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    heapsort(ar,n);
    cout<<"Sorted Array:";
    for (i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}