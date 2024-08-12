typedef struct {
	uint32 id;
	char first_name[100];
	char last_name[100];
	uint32 age;
	float32 gpa;
} Student;


void printStudent(Student* student);
Student* createStudent();
Student* getStudentById(LinkedList* list, uint32 id);
