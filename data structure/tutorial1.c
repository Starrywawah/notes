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
