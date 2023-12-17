#include<bits/stdc++.h>
using namespace std;

int n, a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        int ret2 = 0, ret5 = 0;
        // 2 * 5 = 10, 2와 5의 개수를 통해 0이 몇개인지 파악이 가능하다.
        for(int j = 2; j <= a; j *= 2) // 총 2의 개수는 2의 승수로 나눈 숫자들의 합과 같다.
        {
            ret2 += a / j;
        }
        for(int j = 5; j<= a; j *= 5) //  5 또한 마찬가지이다.
        {
            ret5 += a / j;
        }
        cout << min(ret2, ret5) << "\n"; // 최소값을 체크한다.
    }
    return 0;
}