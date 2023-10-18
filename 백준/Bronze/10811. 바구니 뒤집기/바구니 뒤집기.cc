#include<stdio.h>

int main()
{
    int n,m;
    int k[101] = {0,};
    scanf("%d %d",&n,&m);
    
    int a,b;
    
    for(int i = 0; i < n; i++)
    {
        k[i] = i+1;
    }
    
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            
        }
        else
        {
            for(int j = 0; j< (b-a+1)/2; j++)
            {
                int temp = k[a+j-1];
                k[a+j-1] = k[b-j-1];
                k[b-j-1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i ++)
    {
        printf("%d ",k[i]);
    }
}