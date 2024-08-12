#include "../../headers/defaults.h"

void addStudent(LinkedList *list) {
	Student* student = createStudent();
	addToList(list, student);
	printf("Student added successfully.\n");
	displayStudents(list);
}
