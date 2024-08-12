#include "../../headers/defaults.h"

void printStudent(Student *student) {
	printf("- ID: %ld\n", student->id);
	printf("- First Name: %s\n", student->first_name);
	printf("- Last Name: %s\n", student->last_name);
	printf("- Full Name: %s %s\n", student->first_name, student->last_name);
	printf("- Age: %ld\n", student->age);
	printf("- GPA: %2lf\n", student->gpa);
}

Student* createStudent() {
	Student *student = (Student*) malloc(sizeof(Student));
	student->id = (uint32) time(NULL);
	printf("Enter student first name: ");
	scanf("%s", student->first_name);
	getchar();
	printf("Enter student last name: ");
	scanf("%s", student->last_name);
	getchar();
	printf("Enter student age: ");
	scanf("%ld", &student->age);
	printf("Enter student GPA: ");
	scanf("%f", &student->gpa);
	return student;
}

Student* getStudentById(LinkedList *list, uint32 id) {
	Node *current = list->head;
	while (current != NULL) {
		if (current->data == NULL) {
			printf("No student data found.\n");
			return NULL;
		}
		Student *student = (Student*) current->data;
		if (student->id == id) {
			return student;
		}
		current = current->next;
	}
	return NULL;
}
