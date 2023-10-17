#include<stdio.h>

int main(){
    int mark;
    scanf("%d", &mark);
    if (mark >= 0 && mark <40)
        printf("%d is a fail \n", mark);
    else if(mark>=40 && mark<=100)
        printf("%d is a pass", mark);
    else  
        printf("This is not a valid grade"); 

    return 0;
}