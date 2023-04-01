#include <stdio.h>

int main() {

    int num, factorial=1;

    printf("\nEnter number to find the factorial: ");
    scanf("%d", &num);
    

    int i;
    for (i=num; i>0; i--) {
        factorial *= i;
    }

    printf("\nFactorial of %d is %d", num, factorial);

    return 1;
}