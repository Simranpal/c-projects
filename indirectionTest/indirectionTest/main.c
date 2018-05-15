//
//  main.c
//  indirectionTest
//
//  Created by Simranpal Singh on 2018-05-14.
//  Copyright © 2018 Simranpal Singh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char str1[] = "Hello";
    char *str2  = "World!";
    
    str2++;
    printf("str1  value= %d, address of str1= %d valueat = %c\n", str1, &str1, *str1 );
    printf("str2  value= %d, address of str2= %d valueat = %c\n", str2, &str2, *str2);
    
    return 0;
}
