#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int T, N, M, temp;
    int ans;

    cin >> T;
    while(T--) {
        ans = 1;
        temp = 1;
        cin >> N >> M;
        for(int i = M; i > M - N; i--) {
            ans *= i;
            ans /= temp++;
        }
        cout << ans << "\n";
    }
    return 0;
}