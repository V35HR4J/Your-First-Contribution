#include <stdio.h>
int main() {

    int inputNum, originalNum, remainder, result = 0;
    printf("Enter integer: ");
    scanf("%d", &inputNum);
    originalNum = inputNum;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == inputNum)
        printf("This is an Armstrong number");
    else
        printf("This is not an Armstrong number");
    return 0;
}