#include <stdio.h>

int main() {
    int scores[] = {85, 90, 78, 99, 88, 67, 92};
    int n = sizeof(scores)/sizeof(scores[0]);
    int max = scores[0];
    int min = scores[0];

    for (int i=1;i<n;i++) {
        if (scores[i]>max)
            max = scores[i];
        if (scores[i]<min)
            min = scores[i];
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
