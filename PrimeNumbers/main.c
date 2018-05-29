#include <stdio.h>
#include <stdlib.h>

int main()
{
   _Bool flag = 0;
   int i = 7;

        for(int d = 3; d < i; d+=2) {

            if(i%d == 0){
                    flag = 1;
                     break;

            }
            else{
                flag = 0;

            }
        }
            if(flag == 1)
                 printf("\n %d is NOT prime\n", i);
            else
                 printf("\n %d is prime\n", i);


    return 0;
}
