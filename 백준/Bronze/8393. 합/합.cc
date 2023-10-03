#include<stdio.h>

int main()
{
    int n;
    int answer = 0;
    scanf("%d",&n);
    
    for(int i = n; i > 0; i--)
    {
        answer += i;
    }
    printf("%d",answer);
}