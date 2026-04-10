#include <stdio.h>
#include <math.h>
int main()
{
    int count=0,num,temp,r,result=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(temp=num;temp!=0;temp/=10)
        count++;
    for(temp=num;temp!=0;temp/=10)
    {
        r=temp%10;
        result=result+pow(r,count);
    }
    if(result==num)
        printf("Armstrong\n");
    else
        printf("Not an Armstrong");
    return 0;
}
