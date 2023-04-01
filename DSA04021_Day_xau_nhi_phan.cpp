#include <bits/stdc++.h>

using namespace std;

long long f[100];
void fibo(int n, long long k)
{
    if (n == 1)
    {
        cout << "0";
        return;
    }
    if (n == 2)
    {
        cout << "1";
        return;
    }

    if (k <= f[n - 2])
        fibo(n - 2, k);
    else
        fibo(n - 1, k - f[n - 2]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        f[1]=1;
        f[2]=1;
        for(int i=2;i<93;i++){
            f[i]=f[i-1]+f[i-2];
        }
        fibo(n,k);
        cout << endl;
    }
    system("pause");
    return 0;
}