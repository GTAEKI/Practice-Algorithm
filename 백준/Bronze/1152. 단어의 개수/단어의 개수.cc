#include<stdio.h>
#include<string.h>

int main()
{
    char context[1000002];
    scanf("%[^\n]s",context);
    int count = 0;
    int b = 0;
    
    if(context[0]!=' ') count ++;
    
    for(int i = 1; i < strlen(context); i++)
    {
        if(context[i] != ' ' && context[i-1]== ' ')
        {
            count += 1;
        }
    }
    
    printf("%d",count);
}