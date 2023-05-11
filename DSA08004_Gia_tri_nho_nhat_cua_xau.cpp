#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        int mp[105]={};
        priority_queue <int> q;
        for(int i = 0;i < s.size();i++){
            mp[s[i]]++;
        }
        for(int x : mp){
            if(x > 0) q.push(x);
        }
        while(k--){
            if(q.empty()) break;
            else{
                int x = q.top();
                q.pop();
                x--;
                q.push(x);
            }
        }
        long long ans = 0;
        while(!q.empty()){
            long long x= q.top(); q.pop();
            ans += (x * x);
        }
        cout << ans << endl; 
    }
    return 0;
}