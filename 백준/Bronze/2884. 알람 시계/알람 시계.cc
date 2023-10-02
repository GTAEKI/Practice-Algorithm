#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    
    b -= 45;
    if(b < 0)
    {
        b = 60+b;
        if(a==0)
        {
            a = 23;
        }
        else
        {
            a -= 1;
        }
    }
    
    printf("%d %d",a,b);
    return 0;
}