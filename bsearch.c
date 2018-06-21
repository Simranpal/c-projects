#include <stdio.h>

int bsearch(int [], int, int, int);
int main() {
	
	int a[] = {2,3,4,6,8,9,16,18};
	int length = sizeof(a)/sizeof(a[0]);
	int e;
	printf("\nenter element to search: ");
	scanf("%d",&e);
	int ans = bsearch(a,0, length-1, e);
	if(ans == -1)
		printf("\n element not found!");
	else
		printf("element exists at index: a[%d]", ans);
}

int bsearch( int a[], int low, int high, int e) {
	int mid; 
	mid = (high-low)/2;	
	
	while(low <=high) {
		if(a[mid] < e) {
			low = mid +1;
		}
		else if(a[mid] > e) {
			high = mid -1;
		}
		else {
			return mid;
		}
		mid = low + (high - low) /2;
	}
	return -1;		
	
	
}
