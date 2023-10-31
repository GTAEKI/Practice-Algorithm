#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count = 0;
    cin >> n;
    for(int i = n; i > 0; i --)
    {
       for(int j = 0; j < n; j++)
       {
           if(j < i-1)
           {
               printf(" ");
           }
           else
           {    
               printf("*"); 
               if(j == n-1)
               {
                   for(int k = 0; k < count; k++)
                   {
                       printf("*"); 
                   }  
                   count++;
               }
           }
       }
       printf("\n");
    }
    
    for(int i = n-1; i > 0; i --) // ex_3이면 2번만 반복_ n-1
    {
       for(int j = n; j > 0; j--) // 
       {
           if(j > i)
           {
               printf(" ");
           }
           else
           {    
               printf("*"); 
               if(j==1)
               {
                    count--;
                   for(int k = 0; k < count-1; k++)
                   {
                       printf("*"); 
                   }
               }
           }
       }
       printf("\n");
    }
}