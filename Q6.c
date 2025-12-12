#include <stdio.h>
#include <math.h>

int b2d(long long bin) {
    int dec=0,base=1;
    while (bin>0) {
        int last=bin%10;
        dec+=last*base;
        base*=2;
        bin/=10;
    }
    return dec;
}

long long b2d(int dec) {
    long long bin=0;
    long long place=1;
    while (dec>0) {
        int bit=dec%2;
        bin+=bit*place;
        place*=10;
        dec/=2;
    }
    return bin;
}

int main() {
    int choice;
    scanf("%d", &choice);

    if (choice==1) {
        long long bin;
        scanf("%lld", &bin);
        printf("%d", b2d(bin));
    } 
    else if (choice==2) {
        int dec;
        scanf("%d", &dec);
        printf("%lld", b2d(dec));
    } 
    else
        printf("Invalid choice");

    return 0;
}
