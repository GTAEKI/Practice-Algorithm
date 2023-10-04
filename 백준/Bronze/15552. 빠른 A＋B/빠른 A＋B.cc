#include<stdio.h>

int main()
{
    int testCount;
    scanf("%d",&testCount);
    
    int num1, num2;
    
    for(int i = 0; i < testCount; i++)
    {
        scanf("%d %d",&num1,&num2);
        printf("%d\n",num1+num2);
    }
}