#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;


// Define any additional variables here



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

    char *filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL){
        perror("Error in opening file"); 
        return -1;
    }
    
    char line_buffer[1024];
    int recordcount = 0;
    char steps_string[10];
    
    while(fgets(line_buffer, 1024, file) != NULL) 
    {    
        FITNESS_DATA row = {};
        tokeniseRecord(line_buffer, ",", row.date , row.time, steps_string);
        row.steps = atoi(steps_string);
        data[recordcount] = row;
        recordcount++;
    }
    fclose(file);  
    printf("Number of records in file: %d \n", recordcount);
    
    for (int i; i < 3; i++){
        printf("%s/%s/%d\n", data[i].date, data[i].time, data[i].steps);
    }

    return 0;
    }



    






