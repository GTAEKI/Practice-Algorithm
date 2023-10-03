#include<stdio.h>

int main()
{
    int allPrice;
    int typeCount;
    int a,b;
    int comparePrice = 0;
    scanf("%d\n %d\n", &allPrice, &typeCount);
    
    for(int i = 0; i < typeCount; i++)
    {
        scanf("%d %d\n",&a,&b);
        comparePrice += a*b;
    }
    
    if(allPrice == comparePrice)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
}