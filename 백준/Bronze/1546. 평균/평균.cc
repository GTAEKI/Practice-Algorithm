#include<stdio.h>

int main()
{
    int m,n;
    float h=0;
    float k[1000];
    int max = 0;
    
    scanf("%d",&m);
    
    for(int i = 0; i < m; i++)
    {
        scanf("%d ",&n);
        if(max < n)
        {
            max = n;
        }
        k[i] = n;
    }
    
    for(int i = 0; i < m; i++)
    {
        h += k[i]/max * 100;
    }
    
    printf("%f",h/m);
}