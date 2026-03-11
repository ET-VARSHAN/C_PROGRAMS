#include <stdio.h>
int swap(int A, int B, int C) {
    int bitB = (A >> (B - 1)) & 1;
    int bitC = (A >> (C - 1)) & 1;
    if (bitB != bitC) {
        A ^= (1 << (B - 1));
        A ^= (1 << (C - 1));
    }
    return A;
}
int main() {
    int A, B, C;
    printf("Enter A: ");
    scanf("%d", &A);
    printf("Enter bit b & c:");
    scanf("%d %d", &B, &C);
    printf("Result:%d", swap(A, B, C));
}

