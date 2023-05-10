#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+1], f[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        f[1] = a[1];// có 1 ngôi nhà
        f[2] = max(a[1], a[2]); // có 2 ngôi nhà
        for (int i = 3; i <= n; i++) {// có 2 trường hợp 
        // 1, không lấy ở ngôi nhà thứ i . f[i] = f[i-1] Gía trị sẽ không được cập nhật
        // 2, Có lấy ở ngôi nhầ thứ i . f[i] = f[i-2] +a[i] vì không được lấy cạnh nhau
            f[i] = max(f[i-1], f[i-2] + a[i]);
        }
        cout << f[n] << endl;
    }
    return 0;
}
