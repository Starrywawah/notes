//Q1
#include <stdio.h>

void increase(float stock1D[], int size); 
int main() {
    float stock1D[] = {
        60, 1.80, 75, 0.90, 40, 3.50, 55, 0.60, 30, 4.20}, markerValue = stock1D[8] * stock1D[9];
    int quantities[5], i, *qPtr;
    
    printf("Price of Notebook: RM %.2f\n", stock1D[5]);
    printf("Total value of Markers: RM %.2f\n", markerValue);

    for (int i = 0; i < 5; i++) {
        quantities[i] = (int)stock1D[i * 2];
    }
    
    qPtr = quantities;
    printf("Quantity of Pens: %d\n", *qPtr);
    increase(stock1D, 10);

    return 0;
}

void increase(float stock1D[], int size) {
    for (int i = 1; i < size; i += 2) { // only price indices
        stock1D[i] *= 1.08;
        printf("Updated price: RM %.2f\n", stock1D[i]);
    }
}


//Q2
#include <stdio.h>

void reduce(float ostock[][3], int size);

int main() {
    float ostock[5][3] = {
        {0, 40, 12.50},
        {1, 60, 18.90},
        {2, 35, 6.75},
        {3, 20, 45.00},
        {4, 50, 28.40}
    }, total = ostock[4][1] * ostock[4][2];
    int *qtyPtr;

    printf("Price of Calculator: RM %.2f\n", ostock[3][2]);

    printf("Total value of USB Drives: RM %.2f\n", total);

    int qty[5];
    for (int i = 0; i < 5; i++) {
        qty[i] = (int)ostock[i][1];
    }

    qtyPtr = qty;

    printf("Quantity of Staplers: %d\n", *qtyPtr);
    reduce(ostock, 5);

    return 0;
}

void reduce(float ostock[][3], int size) {
    printf("\nUpdated Prices after 10%% discount:\n");
    for (int i = 0; i < size; i++) {
        ostock[i][2] *= 0.90;
        printf("Item %d: RM %.2f\n", (int)ostock[i][0], ostock[i][2]);
    }
}


//Q3
#include <stdio.h>
#define ROWS 4
#define COLS 3

void calculate(int marks[ROWS][COLS]);
void add(int marks[ROWS][COLS]);

int main() {
    int marks[ROWS][COLS] = {
        {15, 18, 17},
        {12, 20, 19},
        {10, 16, 15},
        {18, 19, 20}
    };

    int *p = &marks[0][0];

    int labtest = *(p + (2 * COLS) + 2);
    printf("Total Marks:\n");
    calculate(marks);

    add(marks);

    return 0;
}

void calculate(int marks[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        int total = 0;
        for (int j = 0; j < COLS; j++) {
            total += *(*(marks + i) + j);
        }
        printf("Total marks for Student %d = %d\n", i, total);
    }
}

void add(int marks[ROWS][COLS]) {
    printf("\nUpdated Marks Table (after adding bonus):\n");
    printf("Student\tQuiz\tAssignment\tLab Test\n");

    for (int i = 0; i < ROWS; i++) {
        printf("%d\t", i);
        for (int j = 0; j < COLS; j++) {
            if (j == 2) {
                *(*(marks + i) + j) += 2;
            }
            printf("%d\t", *(*(marks + i) + j));
        }
        printf("\n");
    }
}


//Q4
#include <stdio.h>

void increase(float stock1D[], int size); 
int main() {
    

    return 0;
}
