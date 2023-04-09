#include <bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,v;
        cin >> n >> v;
        int a[n+1]; // luu khoi luong tung do vat
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int c[n+1];// luu gia tri tung do vat
        for(int i=1;i<=n;i++){
            cin >> c[i];
        }
        int dp[n+1][v+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=v;j++){
                dp[i][j]=dp[i-1][j];
                if(j>=a[i]){
                    dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+c[i]);
                }
            }
        }
        cout << dp[n][v] << endl;
    }
	system("pause");
	return 0;	
}
