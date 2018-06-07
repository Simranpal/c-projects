#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* leftChild;
	struct node* rightChild;
}node;

//declrations
struct node * insert(struct node*, int);
struct node * createNode(int);

struct node* createNode(int data){
	struct node* newNode = (node *)malloc(sizeof(node));
	newNode->data = data;
	newNode->leftChild = NULL;
	newNode->rightChild = NULL;
	return newNode;
}
struct node* insert(node *root, int value ) {
	if(root == NULL) {
		return createNode(value);
	}
	else if (value <= root->data){
		printf("root->leftChild \n"); 
		root->leftChild = insert(root->leftChild, value);
		printf("root->leftChild = %d", root->leftChild->data);
	}
	else{
		printf("root->rightChild \n"); 
		root->rightChild = insert(root->rightChild, value);
		printf("root->rightChild = %d", root->rightChild->data); 
	}
}


int main(){
	struct node* root = NULL;
	root = insert(root,20);
	root = insert(root,10);
	root = insert(root,15);
	return 0;
}
