#include <stdio.h>

int main() {
    int num1, num2, *ptr1, *ptr2;

    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2)
        printf("%d is the maximum number.\n", *ptr1);
    else
        printf("%d is the maximum number.\n", *ptr2);

    return 0;
}
