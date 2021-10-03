#include <iostream>

void swapByValue(int a, int b);
void swapByValueWithoutThirdVariable(int a, int b);
void swapByReferenceWithoutPointers(int &a, int &b);
void swapByReferenceWithPointers(int*, int*);

int main(){

    int x = 8;
    int y = 5;

    std::cout<<"Before swapByValue() x : "<<x<<" y: "<<y<<"\n";
    swapByValue(x,y);
    std::cout<<"After  swapByValue() x : "<<x<<" y: "<<y<<"\n\n";

    std::cout<<"Before swapByValueWithoutThirdVariable() x : "<<x<<" y: "<<y<<"\n";
    swapByValueWithoutThirdVariable(x,y);
    std::cout<<"After  swapByValueWithoutThirdVariable() x : "<<x<<" y: "<<y<<"\n\n";

    std::cout<<"Before swapByReferenceWithoutPointers() x : "<<x<<" y: "<<y<<"\n";
    swapByReferenceWithoutPointers(x,y);
    std::cout<<"After  swapByReferenceWithoutPointers() x : "<<x<<" y: "<<y<<"\n\n";

    std::cout<<"Before swapByReferenceWithPointers() x : "<<x<<" y: "<<y<<"\n";
    swapByReferenceWithPointers(&x,&y);
    std::cout<<"After  swapByReferenceWithPointers() x : "<<x<<" y: "<<y<<"\n\n";
}


void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"Inside swapByValue() x : "<<a<<" y: "<<b<<"\n";
}

void swapByValueWithoutThirdVariable(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout<<"Inside swapByValueWithoutThirdVariable() x : "<<a<<" y: "<<b<<"\n";
}

void swapByReferenceWithoutPointers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"Inside swapByReferenceWithoutPointers() x : "<<a<<" y: "<<b<<"\n";
}

void swapByReferenceWithPointers(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    std::cout<<"Inside swapByReferenceWithPointers() x : "<<*a<<" y: "<<*b<<"\n";
}
