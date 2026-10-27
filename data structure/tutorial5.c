//Q1
#include <stdio.h>

void printNormal(int arr[], int index, int size){
    if (index == size)
        return;

    printf("%d ", arr[index]);
    printNormal(arr, index + 1, size);
}

void printReverse(int arr[], int index){
    if (index < 0)
      return;

    printf("%d ", arr[index]);
    printReverse(arr, index - 1);
}

int main(){
    int arr[] = {4, 7, 1, 5, 9};
    int size = 5;

    printf("Normal order: ");
    printNormal(arr, 0, size);

    printf("\nReverse order: ");
    printReverse(arr, size - 1);

    return 0;
}

//Q2
#include <stdio.h>

long long power(int n, int m) {
  if (m == 0) {
    return 1;
    }
  return n * power(n, m - 1);
}

int main() {
  int n, m;

  printf("Enter n: ");
  scanf("%d", &n);

  printf("Enter m: ");    
  scanf("%d", &m);

  printf("%d to the power of %d = %lld\n", n, m, power(n, m));

  return 0;
}

//Q3
#include <stdio.h>
#include <time.h>

long long fib_recursive(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

long long fib_iterative(int n) {
    if (n == 0)
        return 0;

    long long a = 0, b = 1, next;

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() {
    int n;
    clock_t start, end;
    double recursive_time, iterative_time;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0 || n > 92) {
        printf("Please enter n from 0 to 92.\n");
        return 1;
    }

    start = clock();
    long long result1 = fib_recursive(n);
    end = clock();
    recursive_time = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    long long result2 = fib_iterative(n);
    end = clock();
    iterative_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nfibonaci F(%d) : %lld \n", n, result1);
    printf("Recursive time: %.9f seconds\n", recursive_time);
    printf("Iterative time: %.9f seconds\n",iterative_time);


  
    return 0;
}

/* Fibonacci number table answer
1) Enter n: 10

fibonaci F(10) : 55 
Recursive time: 0.000003000 seconds
Iterative time: 0.000001000 seconds

2) Enter n: 20

fibonaci F(20) : 6765 
Recursive time: 0.000081000 seconds
Iterative time: 0.000000000 seconds

3) Enter n: 40

fibonaci F(40) : 102334155 
Recursive time: 0.841284000 seconds
Iterative time: 0.000001000 seconds

4) 
*/

//Q4
#include <stdio.h>

int countZeros(int n) {
    if (n > -10 && n < 10)
        return n == 0 ? 1 : 0;

    return (n % 10 == 0 ? 1 : 0) + countZeros(n / 10);
}

int main(void) {
    printf("%d\n", countZeros());
    return 0;
}
