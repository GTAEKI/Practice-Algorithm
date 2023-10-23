#include<stdio.h>

int main()
{
    int n, sum = 0; 
    char arr[101]; //배열 선언
    scanf("%d",&n);
    scanf("%s",&arr);
    for(int i =0; i<n; i++){
        sum += arr[i] -'0';
    }
    printf("%d",sum);
}