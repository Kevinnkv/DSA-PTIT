#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <string> q;
        string res;
        // vector<long long >v;
        q.push("1");
        while(!q.empty()){
            string s = q.front();
            if(stoll(s) % n == 0){
                res=s;
                break;
            }  
            q.pop();
            q.push(s+"0");
            q.push(s+"1");
            // v.push_back(stoll(s));//chuyển s dạng chuỗi về kiểu DL long long
        }
        cout << res << endl;
    }
    
    system("pause");
    return 0;
}
