#include<bits/stdc++.h>

int main()
{
    int a,b;
    int c[101][101],d[101][101];
    scanf("%d %d",&a,&b);
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            scanf("%d",&c[i][j]);
        }
        //printf("\n");
    }
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            scanf("%d",&d[i][j]);
        }
        //printf("\n");
    }
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("%d ",c[i][j] + d[i][j]);
        }
        printf("\n");
    }
    return 0;
}