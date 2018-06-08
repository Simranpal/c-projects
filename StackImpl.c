#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedListNode {
	int data;
	struct LinkedListNode *next; 
}LinkedListNode;
typedef struct LinkedList {
	struct LinkedListNode *head; 
	struct LinkedListNode *tail;
	int nodeCount; 
}LinkedList;

//declarations
void initStack(LinkedList **);
void menu();
int push(LinkedList **, int);
struct LinkedListNode *pop(LinkedList **);
void displayStack(LinkedList **list);

void initStack(LinkedList **list){
	(*list)->head = NULL;
	(*list)->tail = NULL;
	(*list)->nodeCount = 0;
}

int push(LinkedList **list, int value) {
	
	LinkedListNode *newNode = (LinkedListNode *)malloc(sizeof(LinkedListNode));

	newNode->data = value;
	newNode->next = (*list)->head;

	(*list)->head = newNode;
	return 1;
}

LinkedListNode *pop(LinkedList **list) {
	LinkedListNode *temp = (*list)->head;
	(*list)->head = (*list)->head->next;
	return temp;
}

void displayStack(struct LinkedList **list){
	LinkedListNode *current = (*list)->head;
	
	while(current !=NULL) {
		printf("%d \n", current->data);
		current = current->next;
	}
	return;
}
void menu() {
	printf("\nPlease choose an operation on Stack below:\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display stack elements\n");
	printf("4. Quit\n");
}

int main() {
	int choice, data;
	int quit = 0;
	struct LinkedList *list_inst = (LinkedList *)malloc(sizeof(LinkedList));
	struct LinkedListNode *temp ;
	
	initStack(&list_inst);
	while(!quit) {
		menu();
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				printf("Please enter data: \n");
				scanf("%d",&data);
				int p_result = push(&list_inst, data);
				if(p_result) printf("Push : %d success\n", data);
				else printf("Push failed : %d\n", p_result); 
				break;
			case 2:
				temp = pop (&list_inst);
				if(temp) printf("pop : %d\n", temp->data);
				else printf("Pop failed :%p\n", temp); 
				break;
			case 3:
				printf("\n**********\n");
					displayStack(&list_inst);
				printf("\n**********\n");
				break;
			case 4:
				quit = 1;
				exit(0);
			default:
				printf("Please enter valid option \n");
				break;
		}

	}
}
