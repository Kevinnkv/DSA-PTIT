#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    int MOD = 1e9 + 7;
    while (t--) {
        int n; cin >> n;
        long long dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){// xét từng bậc
            for(int j=1;j<=3;j++){ //xét từng cách bước lên
                if(i >= j){
                    dp[i] = (dp[i]+dp[i-j]);
                }
            }
        }
        cout << dp[n] << endl;

    }
    system("pause");
    return 0;
}