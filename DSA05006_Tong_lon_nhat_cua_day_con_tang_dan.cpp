#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n],f[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            f[i] = a[i];
            for (int j = 0; j < i; ++j) {
                if (a[i] > a[j]) {
                    f[i] = max(f[i], f[j] + a[i]);
                }
            }
        }
        cout << *max_element(f, f + n) << endl;
    }
    

    system("pause");
	return 0;	
}



