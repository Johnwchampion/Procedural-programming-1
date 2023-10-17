#include<stdio.h>

int main(){
    /*
    int number;
    scanf("%d", &number);
    if(number<0)
        printf("negative number");
    else if(number == 0)
        printf("your number is zero");
    else    
        printf("positive number");


    
    int number;
    scanf("%d", &number);
    if(number%4 == 0)
        printf("your number is divisble by 4 \n");
    else if(number%5 == 0)
        printf("your number is divisble by 5 \n");
    else
        printf("your number is divisble by neither 4 nor 5 \n");

    return 0;
    
    float mark;
    printf("what grade did you get bro? \n");
    scanf("%f", &mark);

    if (mark>=0 && mark<=50)
        printf("you failed haha \n");
    else if (mark>=50 && mark<=70)
        printf("you passed, good on you \n");
    else if (mark>=70 && mark<=100)
        printf("wow you got dinstinction well done! \n");
    else    
        printf("that mark ain't valid");

    return 0;

    */

float temperature;
 printf("what's the temperature ? \n");
 scanf("%f", &temperature);

if(temperature >= -10 && temperature <= 40)
    printf("you are experiencing a temperature which lies somewhewre between -10 and 40 degrees celcius \n");
else
    printf("it is either colder than -10 degrees or hotter than 40 degrees \n");
return 0;
}