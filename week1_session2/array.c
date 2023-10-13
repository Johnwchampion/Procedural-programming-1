#include <stdio.h>

int main(){
    char str [6] = "Hello";
    int count= 6;
    while(count>=0)
    {
    printf("%c\n", str[count]);
    count = count-1;
    }

    /**/

    int sum = 0, a[5]=1,2,6,40,5;
    int i = 0;
    for(i=0; i <5; i++ )
    {sum = a[i] + sum}
    printf("%d\n", sum);

}
