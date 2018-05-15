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
   // printf("str1  value= %d, address of str1= %d valueat = %s\n", str1, &str1, str1 );
    //printf("str2  value= %d, address of str2= %d valueat = %s\n", str2, &str2, str2);
    
    printf("str1= %d, &str1= %d, &str1[1]= %d, *str1 = %s\n", str1, &str1, &str1[1], str1 );
    
    return 0;
}
