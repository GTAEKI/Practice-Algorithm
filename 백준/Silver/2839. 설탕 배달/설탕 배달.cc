#include<bits/stdc++.h>
using namespace std;

int N;
// 0 3 6 9 12 15 18 21 24 27 30
// 5의 배수 제외
int arr[8] = {0,3,6,9,12,21,24,27};
int temp, ans;
bool check;

int main()
{
    check = false;
    cin >> N;
    for(int i = 0; i<8; i++)
    {
        temp = N-arr[i];
        
        if(temp >= 0 && temp % 5 == 0)
        {
            if(arr[i] == 0) ans = temp/5;
            else ans = (temp/5) + (arr[i]/3);
            
            cout << ans << "\n";
            return 0;
        }
    }
    
    cout << -1 << "\n";
    return 0;
}
