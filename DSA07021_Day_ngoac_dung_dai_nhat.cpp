#include <bits/stdc++.h> // thư viện đầy đủ của C++

using namespace std;

void Solve(string s){
    stack<int> st; // khởi tạo stack lưu chỉ số của ngoặc đóng
    int res=0;
    st.push(-1); // để tránh TH lặp vô hạn
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') {
            st.push(i); // nếu gặp dấu mở ngoặc, đẩy chỉ số của nó vào stack
        }
        else{
            st.pop(); // nếu gặp dấu đóng ngoặc, xóa chỉ số của ngoặc mở tương ứng khỏi stack
            if(st.empty()){ // nếu stack rỗng
                st.push(i); // đẩy chỉ số của ngoặc đóng vào stack để kiểm tra với ngoặc tiếp theo
            } 
            else{
                res = max(res,i-st.top()); // tính độ dài dãy ngoặc đúng hiện tại và lưu giá trị tối đa
            }
        }
    }
    cout << res << endl; // xuất kết quả tìm được
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solve(s);
    }
    return 0;
}
