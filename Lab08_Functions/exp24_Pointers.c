#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: ");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: ");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
