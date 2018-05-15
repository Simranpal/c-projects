//
//  main.c
//  indirectionTest
//
//  Created by Simranpal Singh on 2018-05-14.
//  Copyright © 2018 Simranpal Singh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    char str1[] = "Hello";
//    char *str2  = "World!";
//
//    str2++;
//   // printf("str1  value= %d, address of str1= %d valueat = %s\n", str1, &str1, str1 );
//    //printf("str2  value= %d, address of str2= %d valueat = %s\n", str2, &str2, str2);
//
//    printf("str1= %d, &str1= %d, &str1[1]= %d, *str1 = %s\n", str1, &str1, &str1[1], str1 );
    
    int data[3];
    //initialize array
    for(int i = 1; i < 4; i++) {
        data[i-1] = i;
    }
    //print array
    for(int i = 1; i < 4; i++) {
   //     printf("%d\n", data[i]);
    }
    
    int *pi;
    int **ppi;
    
    pi = &data;
    ppi = &pi;
    
    for(int i = 1; i < 4; i++) {
     
    printf("&data=%d pi=%d &pi=%d *pi= %d\n",&data, pi, &pi, *pi);
    printf("&pi=%d *ppi=%d &ppi=%d **ppi=%d\n\n",&pi, *ppi, &ppi, **ppi);
    
    pi++;
    }
    return 0;
}
