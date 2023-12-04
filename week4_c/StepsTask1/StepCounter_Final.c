#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"
#include <math.h>

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
   
FITNESS_DATA data[100000];
char line_buffer[1000];
int recordcount = 0;
char steps_string[10];
char filename[40];
char choice;

while(1){       


        printf("\nA: Specify the filename to be imported\n");                       
        printf("B: Display the total number of records in the file\n");                    
        printf("C: Find date and timeslot with the fewest steps\n");                     
        printf("D: Find date and timeslot with the largest number steps\n");                    
        printf("E: Find the mean step count of all the records in the file\n");       
        printf("F: Find the longest continuous period where the step count is above 500 steps\n"); 
        printf("Q: Exit\n");


scanf(" %c", &choice);


switch(choice){


    case 'A':
    case 'a':
        printf("Input filename : \n");
        scanf("%s", filename);
        FILE *file = fopen(filename, "r");
        while(fgets(line_buffer, 1000, file) != NULL) 
    {    
        FITNESS_DATA row = {};
        tokeniseRecord(line_buffer, ",", row.date , row.time, steps_string);
        row.steps = atoi(steps_string);
        data[recordcount] = row;
        recordcount++;

        }
        if (file == NULL){
        perror("Error in opening file");
        exit(1);
        }

        fclose(file);
        break;


    case 'B':
    case 'b':

        printf("Total records: %d \n", recordcount);

        break;
        

    case 'C':
    case 'c':
        {
        float fewest = 100000;
        int var;
        for(int i = 0; i<recordcount; i++){
            if(data[i].steps < fewest){
                fewest = data[i].steps;
                var =i;
            }
            
        }
        
        printf("Fewest steps: %s %s", data[var].date, data[var].time);

        break;
        }
    case 'D':
    case 'd':
        {float largest = 0;
        int var2 = 0;
        for(int i = 0; i<recordcount; i++){
            if(data[i].steps > largest){
                largest = data[i].steps;
                var2 =i;
            }
        }
        printf("Largest steps: %s %s", data[var2].date, data[var2].time);

        break;
        }
    case 'E':
    case 'e':
        {int TotalSteps = 0;     
        for(int i = 0; i<recordcount; i++){
            TotalSteps += data[i].steps;
         }
        float meansteps = TotalSteps / recordcount;
        int roundedmean = round(meansteps);

        printf("Mean step count: %d", roundedmean);


        break;
        }


    case 'F':
    case 'f':

    int var3 = 0;
    
    for(int i = 0; i<recordcount; i++){
        while(data[i].steps > 500){
         
         var3 = i;

        }}
    
    printf("Longest period start: \n", data[var3].date, data[var3].time);
    printf("Longest period end: \n", data[var3].date, data[var3].time);
    

    


        break;


    case 'Q':
    case 'q':
        {
            exit(0);
        }

        break;

    default: 
        printf("Invalid choice \n");
        
        break;

    
}
    return 0;
}
}








