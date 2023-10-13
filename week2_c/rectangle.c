#include <stdio.h>

int main(){
    float length;
    float width;
    
    printf("what is the length? : ");
    scanf("%f", &length);
   
    printf("what is the width? : ");
    scanf("%f", &width);
    
    float area;
    area = width*length;
    printf("the area of your rectangle is: %f\n ", area);
    
    return 0;
}