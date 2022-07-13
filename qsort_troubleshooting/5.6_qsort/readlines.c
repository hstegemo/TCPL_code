#include <string.h>
#include <stdio.h>

#define MAXLEN 1000
int _getline(char *, int length);
char* alloc(int l);

int readlines(char *lineptr[], int maxlines){
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while((len = _getline(line, MAXLEN)) >= 0)
		if(nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0';	// delete newline
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}

void writelines(char *lineptr[], int nlines){
	int i;
	for(i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}
