#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int C, N;
    cin >> C >> N;
    int w[N];
    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }
    int dp[C+1];
    memset(dp, 0, sizeof(dp)); 
    for (int i = 0; i < N; i++) {
        for (int j = C; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]] + w[i]);
        }
    }
    cout << dp[C] << endl;
    return 0;
}

