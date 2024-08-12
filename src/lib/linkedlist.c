#include "../headers/defaults.h"

LinkedList* createLinkedList() {
	LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
	list->head = NULL;
	list->length = 0;
	return list;
}

Node* createNode(void *val) {
	Node *newNode = malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	return newNode;
}

void* getFromList(LinkedList *list, uint64 index) {
	Node *current = list->head;
	while (current->next != NULL && index > 0) {
		current = current->next;
		index--;
	}
	return current->data;
}


uint64 addToList(LinkedList *list, void *data) {
	if (list->head == NULL || list->length == 0) {
		list->head = createNode(data);
		list->length++;
		return list->length - 1;
	}
    Node* current = list->head;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = createNode(data);
	list->length++;
	return list->length - 1;
}

void removeFromList(LinkedList* list, uint64 index){
	Node *current = list->head;
	Node *previous = NULL;
	while (current->next != NULL && index > 0) {
		previous = current;
		current = current->next;
		index--;
	}
	if (previous == NULL) {
		list->head = current->next;
	} else {
		previous->next = current->next;
	}
	free(current);
	list->length--;
}

void clearList(LinkedList *list) {
	Node *current = list->head;
	while (current != NULL) {
		Node *next = current->next;
		free(current);
		current = next;
	}
	free(list);
}


