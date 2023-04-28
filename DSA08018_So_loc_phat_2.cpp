#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        queue <string> q;
        vector <string> v;
        q.push("6");
        q.push("8");
        while(!q.empty()){
            string s = q.front();
            if(s.size()>n) break;
            v.push_back(s);
            cnt ++;
            q.pop();
            q.push(s + "6");
            q.push(s + "8");
        }
        cout << cnt << endl;
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
