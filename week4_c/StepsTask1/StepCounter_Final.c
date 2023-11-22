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
   

        printf("A: Specify the filename to be imported\n");                       
        printf("B: Display the total number of records in the file\n");                    
        printf("C: Find date and timeslot with the fewest steps\n");                     
        printf("D: Find date and timeslot with the largest number steps\n");                    
        printf("E: Find the mean step count of all the records in the file\n");       
        printf("F: Find the longest continuous period where the step count is above 500 steps\n"); 
        printf("Q: Exit\n");

switch(choice){
    case"A":
    case"a":
        char *filename = "FitnessData_2023.csv";
        FILE *file = fopen(filename, "r");
        tokeniseRecord()
        if (file == NULL){
        perror("Error in opening file");
        }
        break;
    case"B":
    case"b":

    case"C":
    case"b":

    case"D":
    case"b":

    case"E":
    case"e":

    case"F":
    case"f":

    case"Q":
    case"q":


}
}









