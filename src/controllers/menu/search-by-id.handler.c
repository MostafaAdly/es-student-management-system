#include "../../headers/defaults.h"

void searchStudentsById(LinkedList* list){
	uint32 id;
	printf("Enter Student ID find: ");
	scanf("%ld", &id);
	printf("\nSearching for Student with ID: %ld\n", id);
    Student* student = getStudentById(list, id);
	if (student == NULL) {
		printf("Student not found.\n");
	} else {
		printStudent(student);
	}
	returnOrExit(list);
}
