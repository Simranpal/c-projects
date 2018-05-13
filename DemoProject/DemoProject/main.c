//
//  main.c
//  DemoProject
//
//  Created by Simranpal Singh on 2018-05-11.
//  Copyright © 2018 Simranpal Singh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int stars = 0;
    printf("Enter how many lines: ");
    scanf("%d", &stars);
    int i, j, k;
    for(i = stars; i > 0 ; i--) {
        for(j = i; j > 0; j--) {
            printf(" ");
        }
        for(k = i; k <= stars; k++) {
            printf(" *");
        }
        printf("\n");
    }
   
    return 0;
}
