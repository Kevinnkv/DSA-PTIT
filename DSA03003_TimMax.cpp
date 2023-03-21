#include <bits/stdc++.h>

using namespace std;
int MOD = 1e9 + 7;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long sum=0;
        for(int i=0;i<n;i++){
            sum += (long long) (a[i]*i);
            sum %= MOD;
        }
        cout << sum  << endl;
    }
	system("pause");
	return 0;	
}
