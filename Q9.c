#include <stdio.h>

int main() {
    int scores[] = {85,90,78,99,88,99,92};
    int n=sizeof(scores)/sizeof(scores[0]);
    int target = 99;
    int index = -1;

    for (int i=0;i<n;i++) {
        if (scores[i]==target) {
            index=i;
            break;
        }
    }

    if (index!=-1)
        printf("First occurrence of 99 found at %d\n", index);
    else
        printf("Score 99 not found\n");

    return 0;
}
