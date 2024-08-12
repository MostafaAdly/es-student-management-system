
LinkedList* createLinkedList();
Node* createNode(void *val);

void* getFromList(LinkedList* list, uint64 index);
uint64 addToList(LinkedList* list, void *data);
void clearList(LinkedList* list);
void removeFromList(LinkedList* list, uint64 index);
