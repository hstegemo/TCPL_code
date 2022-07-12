/*
 * strlen.c
 *
 *  Created on: Jul 11, 2022
 *      Author: helge
 */
#include <stdio.h>

int _strlen(char *s);

int main(){
	int diff = strlen("Hello, World!");
	printf("the difference is %d\n", diff);

	return 0;
}

int _strlen(char *s){
	char *p = s;

	while(*p != '\0')
		p++;
	return p - s;
}
