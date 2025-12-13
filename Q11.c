#include <stdio.h>

int main() {
    int scores[] = {85, 90, 78, 99, 88, 67, 92};
    int n = sizeof(scores)/sizeof(scores[0]);
    int even_array[n], odd_array[n];
    int even_count=0,odd_count = 0;

    for (int i=0;i<n;i++) {
        if (scores[i]%2==0)
            even_array[even_count++] = scores[i];
        else
            odd_array[odd_count++] = scores[i];
    }

    printf("Even scores:\n");
    for (int i=0;i<even_count;i++)
        printf("%d ", even_array[i]);

    printf("\nOdd scores:\n");
    for (int i=0;i<odd_count;i++)
        printf("%d ", odd_array[i]);

    return 0;
}
