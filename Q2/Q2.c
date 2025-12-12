#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) return a;
    return hcf(b, a % b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("HCF is : %d", hcf(x, y));
    return 0;
}



#include <stdio.h>

int main() {
    int x, y, temp;
    scanf("%d %d", &x, &y);

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF is : %d", x);
    return 0;
}
