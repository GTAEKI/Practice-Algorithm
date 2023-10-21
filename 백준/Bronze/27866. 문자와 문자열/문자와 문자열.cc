#include<stdio.h>

int main()
{
    int a;
    char s[1000];
    
    scanf("%s",s);
    scanf("%d",&a);
    
    printf("%c", s[a-1]);
    
    return 0;
}