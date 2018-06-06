#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* leftChild;
	struct Node* rightChild;
}Node;

Node* insertNodeM1(Node * root, int data) {
	if(root == NULL) {
		Node *newNode = (Node *)malloc(sizeof(Node));
		if(newNode == NULL) {
			printf("malloc failed!");
			return NULL;
		}
		newNode->data = data;
		newNode->leftChild  = NULL;
		newNode->rightChild = NULL;
		root = newNode;
		printf("%d\n",root->data);
	}
	else if(root->data >= data ) {
		root->leftChild = insertNodeM1(root->leftChild,data) ;
		printf("insertNode(root->leftChild,data)\n") ;
	}
	else {
		root->rightChild = insertNodeM1(root->rightChild,data);
		printf("insertNode(root->rightChild,data)\n") ;
	}
	return root;

}

void insertNodeM2(Node *root, int data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("malloc failed!");
		return;
	}
	newNode->data = data;
	newNode->leftChild  = NULL;
	newNode->rightChild = NULL;

	struct Node* current = root;
	struct Node* parent  = root;
	int isLeftChild = 0;
	if(root == NULL) {
		root = newNode;
		printf("%d\n",root->data);
	}
	else {
	while(1) {
		if(current == NULL){
			if(isLeftChild) {
				parent->leftChild = newNode;
				printf("parent->leftChild :%d\n",parent->leftChild->data);
			}
			else{
				parent->rightChild = newNode;
				printf("parent->rightChild :%d\n",parent->rightChild->data);
			}
		break;
		}
		if(current->data > data) {
			isLeftChild = 1;
			parent = current;
			current = current->leftChild;
		}
		else if(current->data <= data) {
			isLeftChild = 0;
			parent = current;
			current = current->rightChild;
		}
		}
	}
}	
int main(){
	struct Node* root= NULL;
	insertNodeM2(root, 5);
	insertNodeM2(root, 6);

//	root = insertNodeM1(root, 5);
//	root = insertNodeM1(root, 6);
	//printf("root->data : %d\n",root->data);
	printf("root->leftChild data : %p\n",root->leftChild);
	printf("root->rightChild data : %p\n",root->rightChild);
	return 0;
}
