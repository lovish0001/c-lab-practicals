#include <stdio.h>
#include <string.h>

int countSubstring(char *str, char *sub) {
    int count = 0;
    char *p, *q;

    while (*str != '\0') {
        p = str;
        q = sub;

        while (*p && *q && (*p == *q)) {
            p++;
            q++;
        }

        if (*q == '\0')
            count++;

        str++;
    }

    return count;
}

int main() {
    char str[100], sub[50];

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the substring: ");
    gets(sub);

    int result = countSubstring(str, sub);
    printf("Total occurrences of substring = %d\n", result);

    return 0;
}
