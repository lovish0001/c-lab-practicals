#include <stdio.h>
int main()
{
    int count=0,num,temp,r,reverse=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        count++;
        reverse=reverse*10+r;
        temp=temp/10;
    }
    printf("Number of digits=%d\n",count);
    printf("Reverse number=%d",reverse);
}
