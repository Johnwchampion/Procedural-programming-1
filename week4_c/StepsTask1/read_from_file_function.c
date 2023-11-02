#include <stdio.h>
#include <stdlib.h> // Defines exit().

FILE *open_file(char *filename, char *mode)
{
    FILE *file = fopen(filename, mode);
    if (file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    return file;
}

int main()
{
    char *filename = "data.txt";
    FILE *file = open_file(filename, "r");

    int buffer_size = 100;
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        char date[11];
        char time[6];
        char steps[4];
        printf("%c", line_buffer);
    }
    atoi(char);
    fclose(file);
    return 0;
}