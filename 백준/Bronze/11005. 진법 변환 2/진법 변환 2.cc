#include<stdio.h>

int main()
{
    int num =0, fm=0, temp=0, temp2 = 0, idx = 0;
    char a[100] = {0}; 
    scanf("%d %d",&num,&fm);
    
    while(num != 0)
    {
        temp = num % fm;
        if(temp > 9)
        {
            temp2 = 'A'+temp-10;
            a[idx] = temp2;
            idx++;
        }
        else
        {
            temp2 = temp + '0';
            a[idx] = temp2;
            idx++;
        }
        num /= fm;
    }
    
    while(--idx >= 0) printf("%c", a[idx]);
}