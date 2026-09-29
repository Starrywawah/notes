//do not run 

//q1
#include <stdio.h>
printf("Enter interger : ");
    scanf("%d", &ans1);
    printf("Enter interger : ");
    scanf("%d", &ans2);
    printf("Enter interger : ");
    scanf("%d", &ans3);

    if (ans1>= ans2 && ans1 >= ans3){
        printf("Maximum element is %d", ans1);
    }
    if (ans2>=ans3 && ans2>=ans1){
        printf("Maximum element is %d", ans2);
    }
    else{
        printf("Maximum element is %d", ans3);
    }
return 0;
}

//q2, same as q1 but use 1d and 2d array

//q3
#include <stdio.h>
void swap(int *ptr1, int *ptr2){
    int value;
    value = *ptr1;
    *ptr1=*ptr2;
    *ptr2 = value;
    
}

int main(){
    int a=1, b=2;

    printf("Before swap = %d || %d ", a, b);
    swap(&a, &b);
    printf("After swap = %d || %d ", a, b);
    return 0;
}

//q4
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    float volume, r;

    printf("Enter the value of radius = ");
    scanf("%f", &r);

    volume = 4/3 * PI * pow(r, 3);
    
    printf("\n\nThe Volume of the sphere is = %.2f cm", volume);
    return 0;
}

//q5
#include <stdio.h>

void mergeArray(arr1[], arr2[], arr3[]){
    int i;

    for(i =0 ; i)
}

int main(){
    int arr1[], arr2[], arr3[];

    printf("Enter first 3 interger values = ");
    scanf("%d", &arr1[]);
    printf("Enter second 3 interger values = ");
    scanf("%d", &arr2[]);

    mergeArray();
    
    printf("\n\nResult of merging the values = %d", arr3[]);
    return 0;
}

//q6
