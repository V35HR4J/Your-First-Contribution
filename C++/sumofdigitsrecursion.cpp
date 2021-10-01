//c++ program to calculate sum of digits using recursion

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
   
  if(n==0){
      return 0;
  }
    
    int ld=n%10;
    int ans=sumOfDigits(n/10);
    return ans+ld;
}




int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

