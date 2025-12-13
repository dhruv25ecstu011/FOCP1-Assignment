#include <stdio.h>

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;

    printf("Array before deletion:\n");
    for (int i=0;i<n;i++)
        printf("%d ", arr[i]);

    printf("\nEnter position to delete (0 for front, %d for end): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position \n");
        return 0;
    }

    for (int i=pos;i<n-1;i++)
        arr[i] = arr[i+1];

    n--;

    printf("Array after deletion :\n");
    for (int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
