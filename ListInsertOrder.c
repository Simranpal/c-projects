#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
int data;
struct Node *next;
}Node;

typedef struct {
struct Node *head;
struct Node *tail;
int nodeCount;
}LinkedList;

// function prototypes
void initList(LinkedList *);
void insertOrder(LinkedList *, int);
void printList(LinkedList *);
// Precondition: LinkedList object pointed by listptr must be existing.
// Return Value: Nothing
void initList(LinkedList *lstPtr){
lstPtr->head = NULL;
lstPtr->tail = NULL;
lstPtr->nodeCount = 0;
}

void printList(LinkedList *lstPtr){
	if (lstPtr->nodeCount == 0){
	printf("Linked list is empty\n");
	return;
	}
	Node *current = lstPtr->head;
	while(current != NULL){
	printf("%d\n", current->data);
	current = current->next;
}

} // end of printList

void insertOrder(LinkedList *lstPtr, int v){

	Node *newNode =(Node *)malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Failed to allocate memory for malloc");
		exit(-1);
	}
	newNode->data =  v;
	newNode->next = NULL;

	//case when list is empty: insert at head
	if(lstPtr->nodeCount == 0) {
		lstPtr->head = newNode;
		lstPtr->tail = newNode;
		lstPtr->nodeCount++;	
		//printf("CONDITION: 0 NODES\n");
		return;
	}
	Node *current = lstPtr->head;

	//case when 1 node
	if(lstPtr->nodeCount == 1) {
		//printf("CONDITION: 1 NODE\n");
		if(current->data > v){
			newNode->next =current;
			lstPtr->head = newNode;
		}
		else
			current->next = newNode;
		lstPtr->nodeCount++;	
		return;
	}
	//case when multiple nodes
	else {

		while(current->next != NULL &&current->next->data < v ){
		//	printf("Current = %d\n", current->data);
			current = current->next;
		}
		if(current->next == NULL) {
		//	printf("CONDITION: LAST NODE\n");
			current->next = newNode;
			return;
		}
		newNode->next = current->next;
		current->next = newNode;
		lstPtr->nodeCount++;	
	}
	return;
}

int main(){
LinkedList ordList;
initList(&ordList);
insertOrder(&ordList, 100);
insertOrder(&ordList, 10);
insertOrder(&ordList, 200);
insertOrder(&ordList, 70);
insertOrder(&ordList, 80);
insertOrder(&ordList, 50);
printList(&ordList);//should print: 10 50 70 80 100 200
return 0;
}
