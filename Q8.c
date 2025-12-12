#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a=0,b=1,c;

    for (int i=1;i<=n;i++) {
        printf("%lld ", a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
