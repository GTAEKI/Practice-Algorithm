#include<bits/stdc++.h>
using namespace std;

int cmpCount(const vector<int>& arr) {
    unordered_map<int, int> countMap;
    int maxCount = 0;

    for(int num : arr) {
        countMap[num]++;
        maxCount = max(maxCount, countMap[num]);
    }

    vector<int> modes;
    for(auto& pair : countMap) {
        if(pair.second == maxCount) {
            modes.push_back(pair.first);
        }
    }

    sort(modes.begin(), modes.end());
    if(modes.size() >= 2) {
        return modes[1];
    } else {
        return modes[0];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, sum = 0;
    vector<int> arr;

    cin >> N;
    for(int i = 0; i < N; i++) {
        int temp = 0;
        cin >> temp;
        sum += temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int mean = round((float)sum / N);
    int median = arr[N / 2];
    int mode = cmpCount(arr);
    int range = arr[N - 1] - arr[0];

    cout << mean << "\n";
    cout << median << "\n";
    cout << mode << "\n";
    cout << range << "\n";

    return 0;
}
