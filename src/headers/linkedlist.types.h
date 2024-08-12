typedef struct Node Node;

struct Node {
    void* data;
    Node* next;
};

typedef struct {
	Node *head;
	uint64 length;
} LinkedList;

