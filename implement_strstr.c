#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strStr(char* haystack, char* needle) {
    int len_hstk = strlen(haystack);
    int len_ndle = strlen(needle);
    char *tmp = (char *)malloc(len_ndle * sizeof(char *));
    int i, j;
    for (i = 0, j = len_ndle - 1; j < len_hstk; i++, j++) {
        strncpy(tmp, &haystack[i], len_ndle);
        if (!strcmp(tmp, needle))
            return i;
    }
    return -1;
}

int main() {

    char *a = "hello world";
    char *b = "llo";
    printf("%s, %s, %d\n", a, b, strStr(a, b));
    return 0;
}
