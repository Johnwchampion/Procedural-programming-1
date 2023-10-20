#include<stdio.h>

int main(){
    /*BRONZE1*/
    /*int number;
    scanf("%d", &number);
    if(number<0)
        printf("negative number");
    else if(number == 0)
        printf("your number is zero");
    else    
        printf("positive number"); */ 
    
    
    /*BRONZE2*/
    /*int number;
    scanf("%d", &number);
    if(number%4 == 0)
        printf("your number is divisble by 4 \n");
    else if(number%5 == 0)
        printf("your number is divisble by 5 \n");
    else
        printf("your number is divisble by neither 4 nor 5 \n");

    return 0;*/ 
    
    
    /*Silver1*/
    /*
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

    return 0;*/
     

    
 

/*Silver2*/ 

/*float temperature;
 printf("what's the temperature ? \n");
 scanf("%f", &temperature);

if(temperature >= -10 && temperature <= 40)
    printf("you are experiencing a temperature which lies somewhewre between -10 and 40 degrees celcius \n");
else
    printf("it is either colder than -10 degrees or hotter than 40 degrees \n");
return 0;*/

/*Gold1*/
/*int choices;
scanf("%d", &choices);
switch(choices){
    case 0:
        printf("you obtained 0 \n");
        break;
    case 1:
        printf("you obtained 1 \n");
        break;
    case 2:
        printf("you obtained 2 \n");
        break;
    case 3:
        printf("you obtained 3 \n");
        break;
    case 4:
        printf("you obtained 4 \n");
        break;
    default:
        printf("out of range \n");

}

    return 0;*/
    
int value;
scanf("%d", &value);
while(value >=0 && value<=100){
    printf("valid but try again \n");
    scanf("%d", &value);
    }

while(value == -1){
    printf("correct!! \n");
    break;
}
    
return 0;

    
}