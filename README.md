# Student Record and Username Processor

A modular C program that reads student records from a CSV file, stores them in a two-dimensional array, writes processed records to a new file, and counts names matching a user-selected starting letter.

## Features

- Reads structured student data from CSV files
- Processes records through separate file, string, and statistics modules
- Generates a standardized output file
- Counts student names by starting letter
- Uses a Makefile for repeatable builds

## Build and run

```bash
make
./student_processor
```

The included `students.csv` contains fictional sample data.
