#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
        int m,n,k;
        cin >> m >> n >> k;
        int a[m],b[n];
        multiset <int> s;
        for(int i=1;i<=m;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        for(int i=1;i<=n;i++){
            cin >> b[i];
            s.insert(b[i]);
        }
        for(auto x:s) {
            k--;
            if(k==0){
                cout << x << endl;
                break;
            }
        }
	}

    system("pause");
    return 0;
}
