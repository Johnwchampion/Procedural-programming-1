#include <stdio.h>

int main()
{
    int var = 65;

    int* var_address=&var;

    printf("\n");
    printf("The content of \"var\" = %d\n",var);

    printf ("The content \"var_address\" = %p\n", var_address);

    printf ("Now the magic ! Content of \"*var_address\" = %c\n", *((char), var_address);
    
    printf("\n");

    return 0;
}