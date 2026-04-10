#include <stdio.h>
int main() {
    int n, i = 1;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;
}
