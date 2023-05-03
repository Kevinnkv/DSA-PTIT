#include <bits/stdc++.h>

using namespace std;
/*
n mũ k bất kì có thể viết được thành 2 dạng
    n^k= n^(k/2) * n^(k/2) nếu k chẵn
    n^k= n^(k/2) * n^(k/2) * n nếu k lẻ
*/
long long MOD = 1e9 + 7;
long long a[11][11];
long long tmp[11][11];
long long n,k;
void Mul(long long a[11][11], long long b[11][11]){ // Multiplication
    long long c[11][11]={}; // lưu kết quả
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                c[i][j] += a[i][k] *  b[k][j];
                c[i][j] %= MOD;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=c[i][j];// cập nhật mảng kết quả
        }
    }
}
void Pow(long long a[11][11],long long k){ // Power
    if(k == 1) return;
    Pow(a , k/2);
    Mul(a,a);
    if(k % 2 == 1) Mul(a,tmp); 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
                tmp[i][j]=a[i][j];
            }
        }
        Pow(a,k);
        long long res=0;
        for(int i=0;i<n;i++){
            res += a[i][n-1];
        }
        cout << res % MOD << endl;
    }
    system("pause");
    return 0;
}