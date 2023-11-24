#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }




// Complete the main function
int main() {
   
FITNESS_DATA data[1000];
char line_buffer[1024];
int recordcount = 0;
char steps_string[10];
char filename[40];
char choice;

        printf("A: Specify the filename to be imported\n");                       
        printf("B: Display the total number of records in the file\n");                    
        printf("C: Find date and timeslot with the fewest steps\n");                     
        printf("D: Find date and timeslot with the largest number steps\n");                    
        printf("E: Find the mean step count of all the records in the file\n");       
        printf("F: Find the longest continuous period where the step count is above 500 steps\n"); 
        printf("Q: Exit\n");

choice = getchar();
while (getchar() != '\n');


switch(choice){
    case"A":
    case"a":
        printf("Input filename : \n");
        scanf("%s", filename);
        FILE *file = fopen(filename, "r");
        while(fgets(line_buffer, 1024, file) != NULL) 
    {    
        FITNESS_DATA row = {};
        tokeniseRecord(line_buffer, ",", row.date , row.time, steps_string);
        row.steps = atoi(steps_string);
        }
        if (file == NULL){
        perror("Error in opening file");
        }
        break;
    case"B":
    case"b":
        while(fgets(line_buffer, 1024, file) != NULL){
        data[recordcount] = row;
        recordcount++;
        }
        printf("Total records: %d", recordcount);
        

    case"C":
    case"b":
        {float fewest = 100000;
        int var;
        for(int i, i<recordcount, i++){
            if(row[i].steps < fewest){
                fewest = row[i].steps;
                var =i;
            }
            
        }}
        printf("Fewest steps: %s %s", row[var].date, row[var].time);

    case"D":
    case"b":

    case"E":
    case"e":

    case"F":
    case"f":

    case"Q":
    case"q":


}
    return 1;
}









