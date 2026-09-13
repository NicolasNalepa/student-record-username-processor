CC = gcc
CFLAGS = -Wall -std=c99

#object files needed to build the program 

OBJ = main.o file_io.o string_tools.o stats_tools.o

# default target, builds the student_processor executable

student_processor: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o student_processor


# compiles any c file into an o file 
%.o: %.c student_processor.h stats_tools.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) student_processor