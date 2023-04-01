#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int it = upper_bound(a+1,a+n+1,k)-a-1; // tim chi so
        if(it == 0) cout << "-1" << endl;
        else cout << it << endl;
        
    }
    system("pause");
    return 0;
}