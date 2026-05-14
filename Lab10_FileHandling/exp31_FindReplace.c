#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptr1 = fopen("File1.txt", "r");
    FILE *ptr2 = fopen("temp.txt", "w");
    char word[50], replace[50], buffer[100];
    int count = 0;
    if (!ptr1 || !ptr2) {
        printf("Error!");
        return 1;
    }
    printf("Word: ");
    scanf("%s", word);
    printf("Replacement: ");
    scanf("%s", replace);
    while (fscanf(ptr1, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) == 0) {
            fprintf(ptr2, "%s ", replace);
            count++;
        } else {
            fprintf(ptr2, "%s ", buffer);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    remove("File1.txt");
    rename("temp.txt", "File1.txt");
    printf("Appearances: %d\n", count);
    return 0;
}
