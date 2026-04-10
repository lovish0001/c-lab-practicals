#include <stdio.h>
#include <math.h>
int main(){
    float u,a,t,b,c,p;
    printf("Enter u, a, t: ");
    scanf("%f%f%f",&u,&a,&t);
    printf("V=%.2f\n", u+a*t);
    printf("S=%.2f\n", u*t+0.5*a*t*t);
    printf("Enter b, c, p: ");
    scanf("%f%f%f",&b,&c,&p);
    printf("T=%.2f\n", 2*a+sqrt(b)+9*c);
    printf("H=%.2f\n", sqrt(b*b+p*p));
    return 0;
}
