#include<bits/stdc++.h>
using namespace std;

long long P[1005][1005];
long long MOD = 1e9 + 7;
void Solve() {
    memset(P,0,sizeof(P));
    for (int i = 1; i <= 1000; ++i) {
        P[i][1] = i;
    }
    for (int i = 2; i <= 1000; ++i) {
        for (int j = 2; j <= i; ++j) {
            P[i][j] = i * P[i - 1][j - 1] % MOD;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Solve();
        cout << P[n][k] << endl;
    }
    return 0;
}
