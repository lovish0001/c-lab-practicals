#include <stdio.h>
#include <string.h>
void reverse(char str[])
{
    int i, len;
    char temp;
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int main()
{
    int choice, result;
    char str1[100], str2[100];
    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("1. strlen\n2. strcat\n3. strcpy\n4. strcmp\n5. reverse\n6. exit\n");
        printf("Enter choice: ");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter string: ");
            scanf(" %s", str1);
            printf("Length = %lu\n", strlen(str1));
            break;
        case 2:
            printf("Enter first string: ");
            scanf(" %s", str1);
            printf("Enter second string: ");
            scanf(" %s", str2);
            strcat(str1, str2);
            printf("Result = %s\n", str1);
            break;
        case 3:
            printf("Enter string: ");
            scanf(" %s", str1);
            strcpy(str2, str1);
            printf("Copied = %s\n", str2);
            break;
        case 4:
            printf("Enter first string: ");
            scanf(" %s", str1);
            printf("Enter second string: ");
            scanf(" %s", str2);
            result = strcmp(str1, str2);
            if (result == 0)
                printf("Equal\n");
            else if (result > 0)
                printf("First is greater\n");
            else
                printf("Second is greater\n");
            break;
        case 5:
            printf("Enter string: ");
            scanf(" %s", str1);
            reverse(str1);
            printf("Reversed = %s\n", str1);
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}
