#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct {
    int items[SIZE];
    int top;
}Stack;

//declarations
void push(Stack *, int);
int  pop(Stack *);
void init(Stack *);

void push(Stack * s, int element) {
    if(s->top == SIZE - 1) {
        printf("Stack overflow! Cannot insert more item\n");
        return;
    }

    s->top++;
    s->items[s->top] = element;
    printf("Item inserted : %d, TOP = %d\n", s->items[s->top]);
}
int pop (Stack *s) {
    if(s->top == -1) {
        printf("Stack underflow! Cannot remove any item\n");
        return -1;
    }

   int item;
   item = s->items[s->top];
   s->top--;
   return item;
}

//initialize stack
void init(Stack *s) {
    s->top = -1;
}

int main()
{
    Stack s1, s2;
    init(&s1);
    init(&s2);
    //push an element to s1 stack
    push(&s1, 555);

    //pop an element and print it
    int p = pop(&s1);
    printf("Popped element : %d\n", p);
    printf("Popped another element : %d", pop(&s1));

    return 0;
}
