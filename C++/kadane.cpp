// c++ code for Kadane's Algorithm
// Time complexity O(n)
// Space complexity O(1)


#include<bits/stdc++.h>
using namespace std;
  int maxSubarraySum(int arr[], int n){
        
       
       int c=0;
       int p=INT_MIN;
       for(int i=0;i<n;i++)
       {
           c+=arr[i];
           p=max(c,p);
           if(c<0)
              c=0;
           
       }
       return p;
        
    }  
     
     // Driver Code   
    int main()

    {
	    int arr[5]={1,2,3,-2,5};
	    int sum=maxSubarraySum(arr,5);
	    cout<<sum;
	    return 0;
    }
    // Output: 9