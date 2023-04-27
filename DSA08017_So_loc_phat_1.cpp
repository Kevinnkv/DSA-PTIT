#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <string> q;
        vector <string> v;
        q.push("6");
        q.push("8");
        while(!q.empty()){
            string s = q.front();
            if(s.size()>n) break;
            v.push_back(s);
            q.pop();
            q.push(s + "6");
            q.push(s + "8");
        }
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
