#include<stdio.h>

int main()
{
    int a = 0;
    int max = 0;
    int count = 1;
    int remainCount = 1;
    scanf("%d\n",&a);
    max = a;
    for(int i = 0; i < 8; i++)
    {
        scanf("%d\n",&a);
        count+=1;
        if(max < a)
        {
            max = a;
            remainCount = count;
        }
        
    }
    printf("%d\n",max);
    printf("%d",remainCount);
    
}