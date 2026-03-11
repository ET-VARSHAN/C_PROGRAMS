#include <stdio.h>
unsigned int rev(unsigned int A) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (A & 1);
        A >>= 1;
    }
    return result;
}
int main() {
    unsigned int A;
    printf("Enter: ");
    scanf("%u", &A);
    printf("Rev: %u", rev(A));
}

