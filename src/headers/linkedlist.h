
LinkedList* createLinkedList();
Node* createNode(void *val);

void* getFromList(LinkedList* list, uint64 index);
uint64 addToList(LinkedList* list, void *data);
uint64* removeFromList(LinkedList* list, uint64 index);
void clearList(LinkedList* list);
