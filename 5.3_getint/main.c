/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: helge
 */
#include <stdio.h>
#define SIZE 10

int main(){
	int n, array[SIZE], getint(int *);
	for(n=0; n < SIZE && getint(&array[n]) != EOF; n++)
		;

	for(int i=0; i<=3; i++)
		printf("%d: %d\n", i, array[i]);
	return 0;
}
