#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d\n",&a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d %d\n",&b,&c);    
        printf("%d\n",b+c);
    }

}