#include <bits/stdc++.h>
using namespace std;

bool Prime(int n){
    bool prime = true;
    if(n<=1){
        prime = false;
    }else{
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                prime = false;
            }
        }
    }
    return prime;
}

int main(){
    
    int number;
    cin >> number;
    if(Prime(number)==true){
        cout << "Entered number is a Prime number" <<endl;
    }else{
        cout << "Entered number is not a Prime number" <<endl;
    }
}