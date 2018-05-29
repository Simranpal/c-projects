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
    printf("\nItem inserted : %d, TOP = %d\n", s->items[s->top]);
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

    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Exit program\n");

    int choice, number;

    while(1) {
        printf("\n Enter a choice : ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\n Enter a number: ");
            scanf("%d", &number);
            push(&s1,number);
            break;

        case 2:
            number = pop(&s1);
             if(number != -1) {
                printf("\n Popped element : %d", number);
             }
             break;
        case 3:
            exit(0);

        default :
            printf("\nEnter a valid choice! ");
        }
    }

    return 0;
}
