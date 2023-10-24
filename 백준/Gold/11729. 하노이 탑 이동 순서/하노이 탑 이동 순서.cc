#include<stdio.h>

int count = 0;

void hanoi(int num, int from, int by, int to)
{
    if (num == 1)
        printf("%d %d\n", from, to);
    else
    {
        hanoi(num - 1, from, to, by);
        printf("%d %d\n", from, to);
        hanoi(num - 1, by, from, to);
    }
}

void hanoiCheck(int num, int from, int by, int to)
{
    if (num == 1)
        count += 1;
    else
    {
        hanoiCheck(num - 1, from, to, by);
        count += 1;
        hanoiCheck(num - 1, by, from, to);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    hanoiCheck(n,1,2,3);
    printf("%d\n",count);
    hanoi(n,1,2,3);
    
}