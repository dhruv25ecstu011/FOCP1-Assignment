#include <stdio.h>

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, position;

    printf("Array before insertion : \n");
    for (int i=0;i<n;i++)
        printf("%d ", arr[i]);

    printf("\nEnter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0 for front, %d for end): ", n);
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i=n;i>position;i--)
        arr[i] = arr[i-1];

    arr[position] = element;
    n++;

    printf("Array after insertion :\n");
    for (int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
