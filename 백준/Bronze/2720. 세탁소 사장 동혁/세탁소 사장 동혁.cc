#include<bits/stdc++.h>

int main()
{
    int a,b;
    int money[4] = {25,10,5,1};
    
    scanf("%d",&a);
    
    while(a--)
    {
        scanf("%d",&b);
        for(int i = 0; i<4; i++)
        {
            printf("%d ",b/money[i]);
            b %= money[i];
        }
        printf("\n");
    }
}