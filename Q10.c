#include <stdio.h>

int main() {
    int marks[] = {85, 99, 78, 92, 99, 88, 99};
    int n = sizeof(marks)/sizeof(marks[0]);
    int count=0;

    printf("Students who scored 99 : \n");

    for (int i=0;i<n;i++) {
        if (marks[i]==99) {
            printf("Student %d\n", i+1);
            count++;
        }
    }

    printf("Total number of students who scored 99 : %d\n", count);

    return 0;
}
