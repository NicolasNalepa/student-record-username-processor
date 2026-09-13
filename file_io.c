#include "student_processor.h"


// reads each line from the input file and stores it in a 2d array

int read_into_array(FILE *fptr_in, char student_array[][MAX_LENGTH]){

int count = 0;

// read each line until the end of file or max students has been reached

while (fgets(student_array[count], MAX_LENGTH, fptr_in) != NULL && 
count < MAX_STUDENTS)

{

    // remove newline characters from the line 

    remove_newline(student_array[count]);
        count++;

}

    return count;

}

// writes student data from array to the output file 

void write_array_to_file(char student_array[][MAX_LENGTH], FILE *fptr_out, int no_of_students)

{
    int i;

    // write each student record to the file


    for (i = 0; i < no_of_students; i++) {
        fprintf(fptr_out, "%s\n", student_array[i]);
    }
}