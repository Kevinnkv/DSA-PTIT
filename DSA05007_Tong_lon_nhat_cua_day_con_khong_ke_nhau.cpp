#include <bits/stdc++.h>

using namespace std;
// ý tưởng giống bài nhà không kề nhau
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n + 1], f[n + 1] = {};
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            if (i == 1) f[i] = a[i];
            if (i >= 2) f[i] = max(f[i - 1], f[i - 2] + a[i]);
        }
        cout << *max_element(f + 1, f + 1 + n) << endl;
    }

    system("pause");
	return 0;	
}



