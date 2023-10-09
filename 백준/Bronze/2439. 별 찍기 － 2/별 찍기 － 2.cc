#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int starNum = 1;
    int spaceNum = n-starNum;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<spaceNum; j++)
        {
            printf(" ");
        }
        for(int j = 0; j<starNum; j++)
        {
            printf("*");
        }
        printf("\n");
        starNum++;
        spaceNum = n-starNum;
    }
    
}