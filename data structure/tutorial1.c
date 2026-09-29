//question 1
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

