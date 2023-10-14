#include<stdio.h>

int main()
{
    int n;
    int m;
    int k[101] = {0,};
    
    scanf("%d %d\n",&n,&m);
    
    int a,b,c;
    
    for(int i = 0; i<m; i++)
    {
        scanf("%d %d %d\n",&a,&b,&c);
        for(int j = a; j < b+1; j++)
        {
            k[j] = c;
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        printf("%d ",k[i]);
    }
}