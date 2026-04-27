#include <stdio.h>

int main() {
    float stock1D[] = {
        60, 1.80, 75, 0.90, 40, 3.50, 55, 0.60, 30, 4.20}, markerValue = stock1D[8] * stock1D[9];
    int quantities[5], i, *qPtr;
    
    printf("Price of Notebook: RM %.2f\n", stock1D[5]);
    printf("Total value of Markers: RM %.2f\n", markerValue);

    for (int i = 0; i < 5; i++) {
        quantities[i] = (int)stock1D[i * 2];
    }
    
    *qPtr = quantities;
    printf("Quantity of Pens: %d\n", *qPtr);
    increasePrices(stock1D, 10);

    return 0;
}

void increasePrices(float stock1D[], int size) {
    for (int i = 1; i < size; i += 2) { // only price indices
        stock1D[i] *= 1.08;
        printf("Updated price: RM %.2f\n", stock1D[i]);
    }
}
