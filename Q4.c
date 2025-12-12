#include <stdio.h>

void swap_temp(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_pointer(int *a, int *b) {
    int *t = a;
    a = b;
    b = t;
    printf("Pointer swap cant modify original values\n");
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int a = x, b = y;
    swap_temp(&a, &b);
    printf("Temp swap: %d %d\n", a, b);

    a = x; b = y;
    swap_arithmetic(&a, &b);
    printf("Arithmetic swap: %d %d\n", a, b);

    a = x; b = y;
    swap_xor(&a, &b);
    printf("XOR swap: %d %d\n", a, b);

    a = x; b = y;
    swap_pointer(&a, &b);
    printf("Pointer swap (original unchanged): %d %d\n", a, b);

    return 0;
}
