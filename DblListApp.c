#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

typedef struct DblList {
    struct Node *head;
    struct Node *tail;
    int nodeCount;
}DblList;

//declarations
void init(DblList *);
Node *createNode();

void init (DblList *listPtr){
    listPtr->head = NULL;
    listPtr->tail = NULL;
    listPtr->nodeCount = 0;
}
Node *createNode(){
    Node *temp = (Node *)malloc(sizeof(Node));

    if(temp == NULL) {
        printf("\nmalloc failed!");
        return NULL;
    }
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insertAtHead(DblList *listPtr, int value) {
    Node *newNode = createNode();
    newNode->data = value;

    if(listPtr->nodeCount == 0) {
        listPtr->tail = newNode;
    }
    else{
        listPtr->head->prev = newNode;

        newNode->next = listPtr->head;
        newNode->prev = NULL;
    }
    listPtr->head = newNode;
    listPtr->nodeCount++;
}

void insertAtTail(DblList *listPtr, int value) {
    Node *newNode = createNode();
    newNode->data = value;
    newNode->next = NULL;

    if(listPtr->nodeCount == 0) {
        listPtr->head = newNode;

    }
    else {
        listPtr->tail->next = newNode;
        newNode->prev = listPtr->tail;
   }
    listPtr->tail = newNode;
    listPtr->nodeCount++;
}

void displayList(DblList *listPtr) {
    Node *current = listPtr->head;

    while(current!=NULL) {
        printf("-[%d]-",current->data);
        current = current->next;
    }
    printf("\n*******\n");
}

void createRandomList(DblList *listPtr, int n) {
    srand(time(NULL));

    for(int i = 1; i < n; i ++) {
        int data = rand()%100;
        insertAtHead(listPtr,data);
    }
}
int main()
{
    DblList list_inst;
    init(&list_inst);
    insertAtHead(&list_inst, 55);
    insertAtHead(&list_inst, 33);
    insertAtHead(&list_inst, 11);
    insertAtTail(&list_inst, 66);
    insertAtTail(&list_inst, 77);

    createRandomList(&list_inst,5);
    displayList(&list_inst);
    return 0;
}
