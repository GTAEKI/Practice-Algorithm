#include <bits/stdc++.h>
using namespace std;

vector<int> nums;
vector<int> result;
int k = 7, n = 9, ck = 0;

void cal(vector<int> b) {
    int sum = 0;
    for (int i : b) sum += i;

    if(ck == 1)
    {
        return;
    }

    if (sum == 100) {
        ck = 1;
        sort(b.begin(),b.end());
        for (int i : b) cout << i << "\n";
    }
    return;
}

void combi(int start, vector<int> b) {
    if(ck == 1)
    {
        return;
    }
    
    if (b.size() == k) {
        cal(b);
        return;
    }
    for (int i = start + 1; i < n; i++) {
        b.push_back(nums[i]);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    for (int i = 0; i < 9; ++i) {
        int input;
        cin >> input;
        nums.push_back(input); 
    }

    sort(nums.begin(), nums.end());

    combi(-1, result);

    return 0;
}
