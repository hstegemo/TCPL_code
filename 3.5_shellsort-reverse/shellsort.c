#include <stdio.h>
#include <string.h>
void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for(gap = n/2; gap > 0; gap /= 2)
		for(i = gap; i < n; i++)
			for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap){
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
}

void reverse(char s[]){
	int c,i,j;
	for(i = 0, j = strlen(s)-1; i<j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
int main(){
	int numbers[] = { 2, 5, 4, 9, 7, 6, 1, 3, 8};
	int length = sizeof(numbers)/sizeof(int);
	for(int i=0; i < length; i++)
			printf("%d ", numbers[i]);
	puts("");

	shellsort(numbers, length);
	for(int i=0; i < length; i++)
		printf("%d ", numbers[i]);
	puts("");

	char word[] = "This is a char array, not a string!";
	reverse(word);
	for(int i=0; i< sizeof(word)/sizeof(char); i++)
		printf("%c", word[i]);
}

