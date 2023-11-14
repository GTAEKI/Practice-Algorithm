#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int room = 1;
    int temp = 0;
    int check = 1;
    cin >> num;
    
    if(num == 1)
    {
        cout << room;
        return 0;
    }
    while(1)
    {
        temp += 6 * room;
        room += 1;
        
        if(temp+1 >= num)
        {
            cout << room;
            break;
        }
    }
    return 0;
}