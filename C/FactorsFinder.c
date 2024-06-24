#include <stdio.h>

int main() {
    int num, k;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("----------------------------");
    printf("Factors of %d >>>>>>>>>>>>>> ", num);
    printf("----------------------------");

    for (k = 1; k <= num; ++k) {
        if (num % k == 0) {
            printf("%d ", k);
        }
    }
    return 0;
}