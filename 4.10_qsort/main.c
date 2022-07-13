#include <stdio.h>

void qsort(int v[], int left, int right);

int main(){
	int arr[] = {3, 6, 9, 2, 4, 8, 6, 1, 5, 7};
	int i;
	for(i=0; i < sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);
	puts("");

	qsort(arr, 0, sizeof(arr)/sizeof(int)-1);	// qsort(<int array>, <first element>, <last element>);
	for(i=0; i < sizeof(arr)/sizeof(int); i++)
			printf("%d ", arr[i]);
	return 0;
}
