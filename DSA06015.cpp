#include <bits/stdc++.h>

using namespace std;

void Solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i :a) cin >> i;
    sort(a.begin(),a.end());
    for(int i :a) cout << i << " ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        Solve();
        cout << endl;
    }
    system("pause");
    return 0;
}