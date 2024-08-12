#include "../../headers/defaults.h"

void updateStudentById(LinkedList *list) {
	uint32 id;
	printf("Enter Student ID to update: ");
	scanf("%ld", &id);
	printf("\nSearching for Student with ID: %ld\n", id);
	Student *student = updateStudent(list, id);
	if (student == NULL) {
		printf("Student not found.\n");
	} else {
		puts(">> --------------------------------- <<");
		puts("** Student updated successfully. **");
		printStudent(student);
	}
	returnOrExit(list);
}
