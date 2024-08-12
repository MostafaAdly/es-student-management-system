#include "headers/defaults.h"

typedef union {
	uint32 age;
	Student student;
} Test;

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	puts("Booting Student Management System...");
	LinkedList *list = createLinkedList();
	handleMenu(-1, list);
	puts("Exiting Student Management System...");
	return EXIT_SUCCESS;
}
