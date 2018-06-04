#include <stdlib.h>
#include <stdio.h>

//substring of a larger substring copied onto head and returned
char *substr(char *, int, int);

int main(){
	printf("\n%s\n", substr("JACKANDJONE",1,3));
	return 0;
}

char *substr(char *str, int start, int length) {
	char *rstr;
	int strlen;
	for(strlen= 0;  str[strlen]!= '\0'; strlen++);
	rstr = (char *)malloc(sizeof(char)*length + 1);
	if(!rstr) {
		printf("\n malloc failed!");
		return NULL;	
	}
	if(start < 0||length > strlen){
		printf("Invalid index paramaters");
		return NULL;
	}
	int i = start;
	int j = 0;
	while(i <= length){
		rstr[j] = str[i];
	i++;
	j++;
	}
	return rstr;
}
