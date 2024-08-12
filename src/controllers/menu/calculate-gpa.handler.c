#include "../../headers/defaults.h"

void calculateAverageGPA(LinkedList *list) {
	puts("\nCalculating GPA for all students.");
	float32 totalGPA = getAverageGPA(list);
	printf("** Average GPA of all students is: %.2f **\n", totalGPA);
	returnOrExit(list);
}

void findHighestGPA(LinkedList *list) {
	puts("\nFinding student with highest GPA.");
	Student *student = getStudentWithHighestGPA(list);
	if (student == NULL) {
		puts("No students found.");
	} else {
		printStudent(student);
	}
	returnOrExit(list);
}

void findLowestGPA(LinkedList *list) {
	puts("\nFinding student with lowest GPA.");
	Student *student = getStudentWithLowestGPA(list);
	printf("Student with lowest GPA is: %s %s\n", student->first_name, student->last_name);
	if (student == NULL) {
		puts("No students found.");
	} else {
		printStudent(student);
	}
	returnOrExit(list);
}
