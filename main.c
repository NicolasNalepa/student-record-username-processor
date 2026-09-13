#include "student_processor.h"
#include "stats_tools.h"

int main(void) {
    FILE * fptr_in = fopen("students.csv", "r");
    FILE * fptr_out = fopen("students_username.csv", "w");

    char student_array[MAX_STUDENTS][MAX_LENGTH];
    int no_of_students = read_into_array(fptr_in, student_array);

    write_array_to_file(student_array, fptr_out, no_of_students);

    fclose(fptr_in);
    fclose(fptr_out);

    // implementation step 

    char letter;
    int count;

    printf("Enter a starting letter: \n");
    scanf(" %c", &letter);

    //count the matching students 

    count = count_names_by_letter(student_array, no_of_students, letter);

    //print the resutl 

printf("The number of students whose first name strats with '%c': %d\n", letter, count);

return 0;

}