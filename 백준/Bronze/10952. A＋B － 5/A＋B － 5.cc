#include<stdio.h>

int main()
{
    int a,b,c;
    while(true)
    {
        scanf("%d %d",&a,&b);
        c = a+b;
        if(c==0) break;
        printf("%d\n",c);
        
    }
}