//Q1
#include <stdio.h>

int main(){
  int arr1[] = {1,3,5,7}, arr2[] = {2,4,6,8}, temp[8], i=0, j=0, k=0;
  
  //combine
  while (i < 4 && j < 4){
  if (arr1[i] < arr2[j]){
    temp[k] = arr1[i];
    i++ ; 
  }
    
  else{
      temp[k] = arr2[j];
            j++;
        }
        k++;
  }
    while (i < 4) {
        temp[k] = arr1[i];
        i++;
        k++;
    }
    while (j < 4) {
        temp[k] = arr2[j];
        j++;
        k++;
    }
    
    printf("Merged array: ");
    for (i = 0; i < 8 ; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
      }


//Q2
#include <stdio.h>

void printArray(int arr[], int left, int right) {
    for (int i = left; i <= right; i++) {
        printf("%d ", arr[i]);
    }
}

void mergeA(int arr[], int left, int mid, int right) {
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

void mergeSortA(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSortA(arr, left, mid);
        mergeSortA(arr, mid + 1, right);

        mergeA(arr, left, mid, right);
    }
}

void mergeD(int arr[], int left, int mid, int right) {
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] >= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

void mergeSortD(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSortD(arr, left, mid);
        mergeSortD(arr, mid + 1, right);

        mergeD(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {1, 3, -5, 6, -8, 6, -5, 4, 3, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arrA[10];
    int arrD[10];

    for (int i = 0; i < n; i++) {
        arrA[i] = arr[i];
        arrD[i] = arr[i];
    }

    printf("(a) Ascending Order:\n");
    mergeSortA(arrA, 0, n - 1);
    printArray(arrA, 0, n - 1);

    printf("\n\n(b) Descending Order:\n");
    mergeSortD(arrD, 0, n - 1);
    printArray(arrD, 0, n - 1);

    printf("\n");

    return 0;
}

//Q3
#include <stdio.h>

void negative (int arr[], int n){
  if (arr[i]<0){
    int temp = arr [i];
    arr[i] = arr[j];
    arr[j] = temp;
    j++;
  }
}

int main(){
  int arr[] = {-2,1,4,-1,5,6,-5,-3,7,8}, n = sizeof(arr)/sizeof(arr[0]), i;

  void negative (arr[], n);

  printf("Output : ");
  for (i = 0 ; i < n ; i++){
    prints ("%d", arr[i]);
  }

  
  
  return 0;
}

//Q4
#include <stdio.h> 

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int before(int a, int b, int ascending)
{
    if (ascending)
        return a < b;
    else
        return a > b;
}

int lomutoPartition(int arr[], int low, int high,
                    int ascending)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (!before(pivot, arr[j], ascending))
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    printf("Pivot %d: ", pivot);
    display(arr, 9);

    return i + 1;
}

int hoarePartition(int arr[], int low, int high,
                   int ascending)
{
    int pivot = arr[low];

    int i = low - 1;
    int j = high + 1;

    while (1)
    {
        do
        {
            i++;
        }
        while (before(arr[i], pivot, ascending));

        do
        {
            j--;
        }
        while (before(pivot, arr[j], ascending));

        if (i >= j)
            break;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Pivot %d: ", pivot);
    display(arr, 9);

    return j;
}

void quickSortLomuto(int arr[], int low, int high,
                     int ascending)
{
    if (low < high)
    {
        int p = lomutoPartition(arr, low, high,
                                ascending);

        quickSortLomuto(arr, low, p - 1, ascending);
        quickSortLomuto(arr, p + 1, high, ascending);
    }
}

void quickSortHoare(int arr[], int low, int high,
                    int ascending)
{
    if (low < high)
    {
        int p = hoarePartition(arr, low, high,
                               ascending);

        quickSortHoare(arr, low, p, ascending);
        quickSortHoare(arr, p + 1, high, ascending);
    }
}

int main(){
  int original[] = {1, 0, 695, 3, -256, -5, 214, 44, 55;, arr[9];
   for (int method = 1; method <= 2; method++)
      {
          for (int order = 1; order >= 0; order--)
          {
              for (int i = 0; i < 9; i++)
              {
                  arr[i] = original[i];
              }
  
              printf("\n================================\n");
  
              printf("%s - %s\n",
                     method == 1 ? "Lomuto" : "Hoare",
                     order == 1 ? "Ascending" : "Descending");
  
              printf("Initial array: ");
              display(arr, 9);
  
              if (method == 1)
              {
                  quickSortLomuto(arr, 0, 8, order);
              }
              else
              {
                  quickSortHoare(arr, 0, 8, order);
              }
  
              printf("Sorted array:  ");
              display(arr, 9);
          }
      }

    return 0;
}
