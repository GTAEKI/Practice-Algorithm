#include<bits/stdc++.h>
using namespace std;

int N;
int ret = -987654321;
string S;
vector<int> nums;
vector<char> signs;

int oper(int first,char sign,int second)
{
    if(sign == '+') return first + second;
    else if(sign == '-') return first - second;
    else if(sign == '*') return first * second;
    
    return 0;
}

void solve(int index, int num)
{
    if(index == nums.size() -1)
    {
        ret = max(ret, num);
        return;
    }
    solve(index + 1, oper(num, signs[index], nums[index+1]));
    if(index + 2 <= nums.size() -1)
    {
        int temp = oper(nums[index+1],signs[index+1],nums[index+2]);
        solve(index+2, oper(num, signs[index], temp));
    }
    return;
}

int main()
{
    cin >> N >> S;
    for(int i = 0; i < N; ++i)
    {
        if(i % 2 == 0) nums.push_back(S[i] - '0');
        else signs.push_back(S[i]);
    }
    
    solve(0,nums[0]);
    cout << ret << "\n";
    return 0;
}