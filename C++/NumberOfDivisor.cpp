#include <bits/stdc++.h>
using namespace std;

int num_of_div(int n){
    int cnt = 0;
    for (int i=1; i*i <= n; i++) {
        if (n%i == 0) {
            if (n/i == i){
                cnt++;
            }
            else{
                cnt += 2;
            }    
        }
    }
    return cnt;
}

int main(){

    int number;
    cin >> number;
    cout << "Number of divisor of that number is : "<<num_of_div(number)<<endl;

} 