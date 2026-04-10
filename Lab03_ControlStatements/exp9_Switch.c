#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("Enter the character ");
    scanf("%c",&a);
    a=tolower(a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("alphabet\n");
    }
    return 0;
}
