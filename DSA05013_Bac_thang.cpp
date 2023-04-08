#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    int MOD = 1e9 + 7;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> dp(n+1);
        dp[0]=1;
        for(int i=1;i<=n;i++){// xét từng bậc
            for(int j=1;j<=k;j++){ //xét từng cách bước lên
                if(i >= j){
                    dp[i] = (dp[i]+dp[i-j]) % MOD;
                }
            }
        }
        cout << dp[n] << endl;

    }
    system("pause");
    return 0;
}