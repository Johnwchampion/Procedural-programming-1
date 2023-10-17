#include<stdio.h>

int main(){
    float temperature;
    printf("what is your temperature? ");
    scanf("%f", &temperature);
    if (temperature > 20 && temperature < 25)
        printf("What a lovely temperature \n");
    else if (temperature > 25)
        printf("it is hot \n");
    else
        printf("I need a jacket \n ");
    return 0;
}