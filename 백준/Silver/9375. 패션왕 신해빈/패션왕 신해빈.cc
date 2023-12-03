#include<bits/stdc++.h>
using namespace std;

int testCase,n,cnt;
string s1,s2;


int main()
{
    cin >> testCase;
    for(int i = 0; i < testCase; i++)
    {
        cin >> n;
        
        cnt = 0; // 테스트케이스별 초기화
        map<string, int> cloth;
        
        for(int j = 0; j < n; j++) //케이스 맵에 입력
        {
            cin >> s1 >> s2;
            if(cloth.find(s2) == cloth.end())
            {
                cloth.insert({s2,1});    
            }
            else cloth[s2] ++;
                
            cnt++; // 의상별 1번씩은 입을 수 있음
        }
        
       int ans = 1;
        for (auto i : cloth)
        {
            ans *= (i.second + 1);
        }
        ans -= 1;
        cout << ans << '\n';
        
    }
    return 0;
}