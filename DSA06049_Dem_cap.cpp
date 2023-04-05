#include <bits/stdc++.h>
using namespace std;

int n,k;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long it=0, cnt=0; 
        for(int i=0;i<n;i++){// ta co cap so thoa man a[j]-a[i]=k voi j chay tu i+1 den n
            it = lower_bound(a+i+1,a+n,a[i]+k)-a;
            cnt += it - (i+1);
        }
        
        cout << cnt << endl;
    }
    system("pause");
    return 0;
}

