#include <stdio.h>
#include <string.h>

int main(){
	char string1[] = "Beta";
	char string2[] = "Alfa";

	printf("strcmp(Alfa, Beta) = %d\n", strcmp("Alfa", "Beta"));
	printf("strcmp(Beta, Alfa) = %d\n", strcmp("Beta", "Alfa"));

	return 0;
}
