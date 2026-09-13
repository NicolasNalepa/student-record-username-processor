#ifndef STUDENT_PROCESSOR_H
#define STUDENT_PROCESSOR_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100
#define MAX_STUDENTS 10
#define MAX_USERNAME_LENGTH 10
// Create a larger buffer for the output line to prevent overflow
#define MAX_OUTPUT_LINE (MAX_LENGTH + MAX_USERNAME_LENGTH)
void remove_newline(char *line);
void generate_username(const char *id, const char *first_name, const
char *last_name, char username[]);
int read_into_array(FILE * fptr_in, char student_array[][MAX_LENGTH]);
void write_array_to_file(char student_array[][MAX_LENGTH], FILE *
fptr_out, int no_of_students);
#endif
