#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main() {
    char record[21] = "2023-09-01,07:30,300";
    char date[11];
    char time[6];
    char steps[10];
    char year[11];
    char month[6];
    char day[10];  // Large enough to hold a typical step count as a string
    char hour[3];
    char min[3];
    int stepsint;
    
    tokeniseRecord(record, ",", date, time, steps);
    tokeniseRecord(date, "-", year, month, day);
    tokeniseRecord(time, ":", hour, min, NULL);

    
    printf("Date: %s\n", date);
    printf("Time: %s\n", time);
    printf("Steps: %s\n", steps);
    printf("year: %s\n", year);
    printf("month: %s\n", month);
    printf("day: %s\n", day);
    printf("hour: %s\n", hour);
    printf("min: %s\n", min);
    

    // Convert the steps string to an integer
    stepsint = atoi(steps);
    printf("Steps as an integer: %d\n", stepsint);
    
    return 0;
}
