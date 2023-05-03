#include <bits/stdc++.h>
using namespace std;
/* Bộ test mẫu

Input:

2

2

6
Output

1

8
*/
int mod = 1e9 + 7;

/* Công thức
Nếu n là số lẻ, thì fibo(n) = fibo(k) * fibo(k + 1) + fibo(k - 1) * fibo(k), với k = n/2.
Nếu n là số chẵn, thì fibo(n) = fibo(k) * fibo(k) + fibo(k - 1) * fibo(k - 1), với k = n/2.
*/
unordered_map<long long, long long> F; // với bài toán này dùng kĩ thuật bảng băm unordered_map sẽ nhanh hơn vector rất nhiều

long long fibo(long long n) {
    if(F[n]) return F[n];
    int k = n >> 1; // k= n/2 (dịch sang phải 1 bit)
    if(n & 1) return F[n] = (fibo(k) * fibo(k + 1) + fibo(k - 1) * fibo(k)) % mod;
    return F[n] = (fibo(k) * fibo(k) + fibo(k - 1) * fibo(k - 1)) % mod;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 0) {
            cout << 0 << endl;
        } else {
            F[0]=F[1]=1;
            cout << fibo(n - 1) << endl;
        }
    }
    return 0;
}
