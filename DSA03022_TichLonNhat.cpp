#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long t2 =max(a[n-1]*a[n-2]*a[n-3],a[0]*a[1]*a[n-1]);
    long long t3 = max(a[0]*a[1],a[n-1]*a[n-2]);
    long long res = max(t3,t2);
    cout << res << endl;
    system("pause");
    return 0;
}
