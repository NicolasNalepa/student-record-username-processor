#include "student_processor.h"

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// definitions 


// function declerations 


void remove_newline(char *line) {

    int len = strlen(line);

    
    // if the string is not emptey or the last character is '\n' 
    // replace with the null terminator 
    
    if (len> 0 && line[len - 1] == '\n'){
        line[len - 1] = '\0';
    }

}

// username generator 

void generate_username (const char *id, const char *first_name, const char *last_name, char username[])

{

int position = 0; 
int i;

//make the first letter a capitol 

// makes the first letter an upercase 

username[position] = toupper(first_name[0]);
position++;


// add up to the first seven letters of the last name 

i = 0;
while (last_name[i] != '\0' && i < 7) {

username[position] = tolower(last_name[i]);
position++;
i++;

    }

// add the last two digits of the ID

i = strlen(id) - 2;
username[position] = id[i];
position++;


// adds the final digit of the student ID

username[position] = id[i + 1];
position++;

// replace will NULL terminator so that the string is ready to be processed

username[position] = '\0';


}