#include<stdio.h>

int main()
{
    int num = 0, count = 0;
    int box[100][100] = {0,};
    scanf("%d",&num);
    
    for(int i = 0; i < num; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        for(int k = a; k < a+10; k++)
        {
            for(int j = b; j < b+10; j++)
            {
                box[k][j] = 1;
            }
        }
    }
    
    for(int i = 0; i<100; i++)
    {
        for(int j = 0; j<100; j++)
        {
            if(box[i][j]==1)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}