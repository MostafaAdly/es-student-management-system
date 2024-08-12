#include "../../headers/defaults.h"

void deleteStudentById(LinkedList *list) {
	uint32 id;
	printf("Enter Student ID to remove: ");
	scanf("%ld", &id);
	printf("\nSearching for Student with ID: %ld\n", id);
	uint64 index = 0;
	Node *current = list->head;
	while (current != NULL && current->data != NULL
			&& ((Student*) current->data)->id != id) {
		current = current->next;
		index++;
	}
	if (current == NULL || current->data == NULL) {
		puts("This student was not found, please try again.");
		return deleteStudentById(list);
	}
	removeFromList(list, index);
	printf("** Removed student #%ld from list. **", id);
	returnOrExit(list);
}
