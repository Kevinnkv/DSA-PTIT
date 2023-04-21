#include <bits/stdc++.h>

using namespace std;
/*
Duyệt các phần tử của chuỗi s, nếu gặp dấu mở thì đẩy vào ngăn xếp , nếu gặp dấu đóng thì xét xem ở đỉnh ngăn xếp (dấu liền trước) có phải dấu mở để tạo thành 1 cặp ngoặc đúng không
Nếu đúng thì xóa luôn phần tử ở đỉnh ngăn xếp(loại bỏ cặp ngoặc đúng đó) . Cuối cùng trong ngăn xếp , nếu còn phần tử tức là có dấu thừa, return false luôn/
*/
bool Solve(string s){
    int  n=s.size();
    stack <char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else if(!st.empty()){// Nếu không có dòng này, khi nộp sẽ bị RTE vì bạn phải kiểm tra stack có rỗng hay không trước khi truy cập đến đỉnh của nó
            if(s[i]==')'&& st.top()=='(') st.pop();
            if(s[i]==']'&& st.top()=='[') st.pop();
            if(s[i]=='}'&& st.top()=='{') st.pop();
        }
    }
    if(!st.empty()) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(Solve(s)) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
    
    system("pause");
    return 0;
}
