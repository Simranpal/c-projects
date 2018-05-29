#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c[40] = "this is a test";
    printf("\n Input :- %s", c);

    for(int i = 0; (c[i]  =toupper(c[i]))!= '\0'; i ++)

    printf("\n Output :- %s", c);


    return 0;
}
