#include<bits/stdc++.h>

int reverse(int x)
{
    int answer = 0;
    
    for(int i = x; i; i/=10)
    {
        answer = answer * 10 + i % 10;
    }
    return answer;
}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    a = reverse(a);
    b = reverse(b);
    
    if(a>b) printf("%d",a);
    else printf("%d",b);
}