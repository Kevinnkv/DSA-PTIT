#include <bits/stdc++.h>

using namespace std;

int a[1000005],f[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int res = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        f[a[i]] = f[a[i]-1]+1;
        res = max(res,f[a[i]]);
    }
    cout << n-res;

    system("pause");
	return 0;	
}



