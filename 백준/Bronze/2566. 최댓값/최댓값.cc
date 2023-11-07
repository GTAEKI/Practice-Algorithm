#include<bits/stdc++.h>

int main()
{
    int a=0;
    int max = -1;
    int maxX = 0;
    int maxY = 0;
    
    
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            scanf("%d",&a);
            if(max <= a)
            {
                max = a;
                maxX = i;
                maxY = j;
            }
        }
        //printf("\n");
    }
    
    printf("%d\n",max);
    printf("%d %d\n",maxX,maxY);
    
    return 0;
}