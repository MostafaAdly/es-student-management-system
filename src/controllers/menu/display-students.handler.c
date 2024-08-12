#include "../../headers/defaults.h"

void displayStudents(LinkedList *list) {
	printf(">> ==================================== <<\n");
	printf("\n\nDisplaying Students\n");
	printf("Total Students: %lld\n\n", list->length);
	Node *current = list->head;
	uint64 index = 0;
	while (current != NULL) {
		if (current->data == NULL) {
			printf("No student data found.\n");
			return;
		}
		printf("Student #%lld:\n", index + 1);
		printStudent((Student*) current->data);
		current = current->next;
		if(current != NULL)
			printf("----------------------\n");
		index++;
	}
	returnOrExit(list);
}
