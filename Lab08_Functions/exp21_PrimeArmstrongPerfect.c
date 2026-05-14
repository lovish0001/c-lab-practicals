#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int isArmstrong(int n)
{
    int original = n, sum = 0, digits = 0, temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0)
    {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }
    return (sum == original);
}
int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return (sum == n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    if (isPerfect(num))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");
    return 0;
}
