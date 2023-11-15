#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 1, y = 1, num = 0,count = 1;
    bool check = false;
    cin >> num;
    
    while(true)
    {   
        if(count == num)
        {
            printf("%d/%d",x,y);
            break;
        }
        
        if(x == 1 && check == false)
        {
            check = true;
            y+=1;
            count+=1;
        }
        else if(y == 1 && check == true)
        {
            check = false;
            x+=1;
            count+=1;
        }
        else
        {
            switch(check)
            {
                case true:
                    x+=1;
                    y-=1;
                    count +=1;
                    break;
                
                case false:
                    x-=1;
                    y+=1;
                    count +=1;
                    break;
                    
            }//switch
        }//else
    }//while
}//main