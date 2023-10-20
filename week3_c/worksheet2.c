#include<stdio.h>

float circleArea (float radius){
    float pi = 3.14159;

    float circleArea = radius**2 * pi;
    
return circleArea;

}

int main(){
    scanf("%f", &radius);
    printf("The area of your circle is %f: ", circleArea);
}