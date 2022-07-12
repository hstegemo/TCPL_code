/*
 * allocbuf.c
 *
 *  Created on: Jul 11, 2022
 *      Author: helge
 */
#include <stdio.h>
#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){
	if(allocbuf + ALLOCSIZE - allocp >= n){
		allocp += n;
		return allocp - n;
	} else
		return 0;
}

void afree(char *p){
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

char *retval1, *retval2, *retval3;
int main(){
	if(retval1 = alloc(900))
		printf("The first test worked!: %p\n", retval1);
	else
		printf("The first test didn't work!\n");
	puts("");

	if(retval2 = alloc(100))
			printf("This second test worked!\n");
		else
			printf("This second test failed!\n");
	puts("");

	if(retval3 = alloc(1))
			printf("The third test worked\n");
		else
			printf("The third test didn't work!\n");

	//afree(retval3);
	afree(retval1);

	if(alloc(1))
			printf("The final test worked\n");
		else
			printf("The final test didn't work!\n");
	puts("");
}
