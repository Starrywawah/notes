//1
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before Swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}

//2
#include <stdio.h>

int main() {
    int m[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printf("Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nUsing pointer arithmetic:\n");

    int *ptr = &m[0][0];

    for(int i = 0; i < 12; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

//3
#include <stdio.h>
#define SIZE 3

int sum(int *arr) {
    int total = 0;
    for(int i = 0; i < SIZE * SIZE; i++) {
        total += *(arr + i);
    }
    return total;
}

float av(int *arr) {
    return (float)sum(arr) / (SIZE * SIZE);
}

void minmax(int *arr, int *min, int *max) {
    *min = *max = *arr;

    for(int i = 1; i < SIZE * SIZE; i++) {
        if(*(arr + i) < *min)
            *min = *(arr + i);
        if(*(arr + i) > *max)
            *max = *(arr + i);
    }
}

void evenodd(int *arr) {
    printf("Even numbers: ");
    for(int i = 0; i < SIZE * SIZE; i++) {
        if(*(arr + i) % 2 == 0)
            printf("%d ", *(arr + i));
    }

    printf("\nOdd numbers: ");
    for(int i = 0; i < SIZE * SIZE; i++) {
        if(*(arr + i) % 2 != 0)
            printf("%d ", *(arr + i));
    }
}

int main() {
    int m[SIZE][SIZE] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int *ptr = &m[0][0];

    printf("Array:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    int total = sum(ptr);
    int min, max;

    minmax(ptr, &min, &max);
    printf("\nSum of array: %d\n", total);
    printf("Average of array: %.2f\n", av(ptr));
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    evenodd(ptr);

    return 0;
}
