#include<stdio.h>

int main()
{
    int A,B,C;
    int Ch,Cm;
    
    scanf("%d",&A);
    scanf("%d\n",&B);
    scanf("%d",&C);
    
    Ch = C/60;
    Cm = C%60;
    
    A += Ch;
    if(A > 23)
    {
        A = A % 24;
    }
    
    B += Cm;
    if(B > 59)
    {
        B = B-60;
        if(A == 23)
        {
            A = 0;
        }
        else 
        {
            A+= 1;
        }
    }
    
    printf("%d %d",A,B);
    return 0;
    
}