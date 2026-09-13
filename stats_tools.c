#include "stats_tools.h"

int count_names_by_letter(char student_array[][MAX_LENGTH], int no_of_students,  char letter)

{

int count = 0;
int i;
int first_letter;

// converts input letter to lowercase if it is uppercase 

if (letter >= 'A' && letter <= 'Z') {
    
    letter = letter + 32;

}

//loops through each student record

for (i = 0; i < no_of_students; i++) {

// starts at the beginning of this line 

int j = 0;


//finds the first comma in the string and the first name that starts right after 

while (student_array[i][j] != '\0' && student_array[i][j] != ',') {
    j++;
}

// move to the first character of the first name 

j++;


// stores the first letter of the first name

first_letter = student_array[i][j];

//converts the first letter to lowercase 

if (first_letter >= 'A' && first_letter <= 'Z') {
    first_letter = first_letter + 32;
}

// if the first letter matches the target, increments the count

if (first_letter == letter) {
    count++;

    }

}

return count;


}
