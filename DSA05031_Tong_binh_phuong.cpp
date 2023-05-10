#include<bits/stdc++.h>
using namespace std;

int t, n;
void Solve() {
    vector<int> f(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        f[i] = i;
        for (int j = 1; j <= sqrt(i); ++j) {
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }
    cout << f[n];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while (t--) {
        cin >> n;
        Solve();
        cout << endl;
    }
    return 0;
}
