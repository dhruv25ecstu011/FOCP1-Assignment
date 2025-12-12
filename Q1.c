#include <stdio.h>
#include <math.h>

int main() {
    int a, original, digits = 0;
    double sum = 0.0;

    scanf("%d", &a);
    original = a;

    int temp = a;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = a;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
