/*
Program to find the pth power of a number using recursion
Author: Prajjwal Pathak
Date Modified: 1st October 2021
*/

#include <iostream>

using namespace std;

//Power function
int power(int b, int p)
{
    if (p != 0)
        return (b * power(b, p - 1));
    else
        return 1;
}

int main()
{

    int b, p, r = 1;
    cout << "Enter base: ";
    cin >> b;
    cout << "Enter Power: ";
    cin >> p;
    r = power(b, p);   //Function call
    cout << "Result: " << r;

    return 0;
}