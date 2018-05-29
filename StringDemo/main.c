#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myStr[100] = "This - is - a - test";
    const char s[2] = "-";
    //Enter your own string
    //printf("\n Enter a string upto length 100 : ");
   // scanf("%s", myStr);
    //printf("\n Length of your string : %d", strlen(myStr));

    char *token ;
    char *token1 ;

    token1 = strtok(myStr, s);

    printf("\n Token 1 of your string is : %s", token1);

    while(token!= NULL){
            printf("\n%s", token);
        token = strtok(NULL, s);

    }

    return 0;
}
