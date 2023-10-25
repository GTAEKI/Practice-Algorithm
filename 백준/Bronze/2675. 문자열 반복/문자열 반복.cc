#include<stdio.h>
#include <string.h>

int main()
{
    int t,a;
    char b[20];
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %s",&a,b);
        int len = strlen(b);
        for(int j = 0; j<len; j++)
        {
            for(int k = 0; k<a;k++)
            {
                printf("%c",b[j]);
            }
        }
         printf("\n");
        
    }
}