#include <stdio.h>
#include <limits.h>
int Pal(int A) {
    if (A < 0) return 0; 
    int original = A, reversed = 0;
    while (A != 0) {
        int digit = A % 10;
        if (reversed > (INT_MAX - digit) / 10) return 0;
        reversed = reversed * 10 + digit;
        A /= 10;
    }
    return (original == reversed);
}
int main() {
    int A;
    printf("Enter an integer: ");
    scanf("%d", &A);
    if (Pal(A))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

