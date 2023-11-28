#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17,23,31};

    int* address;

    address = vector; 

    printf("\n \n address = %p\n", address);

    printf( " vector = %p\n\n",vector);

    printf ("address[2] = %d  ,  vector[2] = %d  \n\n",address[2],vector[2]);


    return 0;
}