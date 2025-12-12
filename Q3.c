#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int subtract(int a, int b) {
    return add(a, add(~b, 1));
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Result = %d", subtract(x, y));
    return 0;
}
