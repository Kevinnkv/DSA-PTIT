#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long sum = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2 != 0) cout << "NO" << endl;
		else{
			long long s = sum/2;
			int dp[s+1];// tao mang co s+1 gia tri tu 0 den s
			// mang dp chi co 2 gia tri 0 va 1 tuong ung voi khong hoac co
			memset(dp,0,sizeof(dp));
			dp[0]=1;
			for(int i=0;i<n;i++){
				for(int j=s;j>=a[i];j--){
					if(dp[j-a[i]] == 1){
						dp[j] = 1;
					}
				}
			}
			if(dp[s] == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		
	}
	return 0;
}
