#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=1;i<=n;i++) cin >> a[i];
        // dùng hàm lower_bound để tìm vị trí đầu tiên trong mảng lớn hơn hoặc bằng k
        int res = lower_bound(a+1,a+n+1,k)-a;
        if(a[res] == k) cout << res << endl;
        else cout << "NO" << endl;
    }
    system("pause");
    return 0;
}