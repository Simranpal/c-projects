// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode *currentNode = head;
    SinglyLinkedListNode *prevNode    = NULL;
    SinglyLinkedListNode *nextNode    = NULL;
    
    while(currentNode !=NULL) {
        
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    return prevNode;

}
