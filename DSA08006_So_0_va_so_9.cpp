#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n) {
    int x = stoi(s);
    if (x % n == 0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <string> q;
        q.push("9");
        while(!q.empty()){
            string s = q.front();
            q.pop();
            if(check(s, n)) {
                cout << s << endl;
                break;
            }
            q.push(s + "0");
            q.push(s + "9");
        }
    }
    return 0;
}
