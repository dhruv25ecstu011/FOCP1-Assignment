#include <stdio.h>

int main() {
    int arr[] = {5, 10, 20, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peak =-1;

    if (n==1)
        peak = arr[0];
    else if (arr[0]>=arr[1])
        peak = arr[0];
    else if (arr[n-1]>=arr[n-2])
        peak = arr[n-1];
    else {
        for (int i=1;i<n-1;i++) {
            if (arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]) {
                peak = arr[i];
                break;
            }
        }
    }

    if (peak != -1)
        printf("Peak element : %d\n", peak);
    else
        printf("No peak element\n");

    return 0;
}
