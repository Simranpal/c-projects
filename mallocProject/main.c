#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n;

    printf("Enter how many elements you want to store : " );
    scanf("%d", &n);

    //using malloc to allocate memory for n integers
    p = (int *)malloc(n* sizeof(int));

    if(!p) {
        printf("Failed to allocate memory!\n Exiting program\n" );
        exit(1);
    }

    int myArray[n];

    //input values
    for(int i = 0; i < n; i ++) {
        printf("\nEnter the number: " );
        scanf("%d", p+i);
    }
    //printing
    printf("\nValues entered: \n ");
    for(int i = 0; i < n; i ++) {
        printf("%4d ", *(p+i));
    }


    return 0;
}
