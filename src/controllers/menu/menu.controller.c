#include "../../headers/defaults.h"

uint8 MIN_QUESTION_CHOICE = 1;
uint8 MAX_QUESTION_CHOICE = 12;
uint8 INIT_CHOICE = -1;
// initializing QUIT_CHOICE as hard-coded 10 is better in my mind from initializing it as (methods.length + 1)
uint8 QUIT_CHOICE = 9;

uint32 handleMenu(uint32 choice, LinkedList *list) {
	printf("\nYour choice: %ld\n", choice);
	if (choice == QUIT_CHOICE || choice == 0)
		return 0;

	if (choice != INIT_CHOICE) {
		if (choice < MIN_QUESTION_CHOICE || choice > MAX_QUESTION_CHOICE) {
			puts("Invalid choice. Please try again.");
			return handleMenu(INIT_CHOICE, list);
		}
		typedef void (*MethodType)(LinkedList*);
		MethodType methods[] = { addStudent, displayStudents,
				searchStudentsById, updateStudentById, deleteStudentById,
				calculateAverageGPA, findHighestGPA, findLowestGPA };
		methods[choice - 1](list);
		return handleMenu(INIT_CHOICE, list);
	}

	puts("===================================");
	puts("1. Add a Student");
	puts("2. Display All Students");
	puts("3. Search for a Student By ID");
	puts("4. Update a Student By ID");
	puts("5. Delete a Student By ID");
	puts("6. Calculate Average GPA");
	puts("7. Find Student with Highest GPA");
	puts("8. Find Student with Lowest GPA");
	puts("9. Quit / Exit Program");
	puts("===================================\n");

	printf("Enter your choice: ");
	scanf("%ld", &choice);
	getchar();
	return handleMenu(choice, list);
}

void returnOrExit(LinkedList *list) {
	uint32 c;
	printf("\n> Return to main menu? (1=Yes/0=No): ");
	scanf("%ld", &c);
	if (c == 1) {
		handleMenu(INIT_CHOICE, list);
		return;
	}
	exit(EXIT_SUCCESS);
}
