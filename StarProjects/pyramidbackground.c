/*C program to print following Pyramid:
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/

#include <stdio.h>

int main() {
	
	int i, j, k, h;
	printf("Enter height of triangle\n");
	scanf("%d", &h);

	for(i = 1; i <= h; i++) {
		for(j = h ; j > i; j--){
			printf("*");
		}
		for(k = 2; k < 2*i; k++){
			printf(" ");
		}
		for(j = h ; j > i; j--){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
