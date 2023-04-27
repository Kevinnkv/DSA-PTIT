#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <string> q;
        q.push("1");// đẩy 1 vào trước để đảm bảo queue không rỗng trước khi lấy ra phần tử đầu tiên
        while(n--){
            string s = q.front();
            cout << s << " ";
            q.pop();
            q.push(s+"0");
            q.push(s+"1");
        }
        cout << endl;
    }
    system("pause");
    return 0;
}