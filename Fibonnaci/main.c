#include <stdio.h>
#include <stdlib.h>

int fibo(int c){
    if(c == 1)
       return 0;
    else if(c == 2)
        return 1;
    else
        return fibo(c-1)+fibo(c-2);

}
int main()
{
    int count = 12;
//    while(count <= 10) {
//            printf("%d ", fibo(count));
//            count++;
//    }

int i = 0;
int k = 1;
int j = 1;

if(count == 1) {
    printf("%d", i);
}
else {
    while( k <= count) {
        int c = i + j;
        printf("%d ", j);
        i = j;
        j = c;
        k++;
    }
}
    return 0;
}
