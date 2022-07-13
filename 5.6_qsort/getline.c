#include <stdio.h>

int GetLine(char s[], int lim){
    int c, i;

    i=0;
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    printf("Returns %d\n", i);
    return i;
}

int get_line(char *line, int lim) {
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        *line++ = c;
    }
    if (c == '\n') {
        *line++ = c;
        i++;
    }
    *line = '\0';
    return i;
}
