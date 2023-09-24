#include<stdio.h>

int main()
{
    int a,b;
    int c,d,e,f;
    
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    
    c = a * (b%10);
    d = a * ((b/10)%10);
    e = a * ((b/100)%10);
    f = c + (d * 10) + (e * 100);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    
    return 0;
}