#include <stdio.h>
#include <stdlib.h>

int main(){
    char filename[] = "./data.txt";
    FILE *file = fopen(filename, "r");
    
    if(file == NULL){
        perror("");
        return 1;
    }
    int buffer_size = 2 , count=0;
    char buffer[buffer_size];
    while(fgets(buffer, buffer_size, file)){
        printf("%s", buffer);
        count++;
    }
    
    printf("the loop was executed %d times \n", count);
       
    fclose(file);
    return 0;
}