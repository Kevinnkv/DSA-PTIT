#include <bits/stdc++.h>

using namespace std;
vector <int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        int k = s/7; // số ngày không được mua trong s ngày , mỗi tuần có 1 ngày không được mua
        int t = ((m*s)-1)/n +1;
        if(t > s-k) cout << "-1" << endl;
        else cout << t << endl;
    }
    system("pause");
    return 0;
}
