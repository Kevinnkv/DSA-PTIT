#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5], r[n+5], l[n+5]; // khai báo mảng a, r, l
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        stack<int> st; // khai báo stack st để lưu index của các phần tử
        for(int i = 1; i <= n; i++) {
            while(!st.empty() && a[st.top()] >= a[i]) { // xét điều kiện pop phần tử ra khỏi stack
                st.pop();
            }
            if(st.empty()) {
                l[i] = 0; // trường hợp stack rỗng, l[i] = 0
            }
            else {
                l[i] = st.top(); // l[i] là phần tử trước đó trong stack
            }
            st.push(i); // push index của phần tử vào stack
        }
        while(!st.empty()) {
            st.pop(); // xóa hết các phần tử trong stack
        }
        for(int i = n; i >= 1; i--) {
            while(!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                r[i] = n+1; // trường hợp stack rỗng, r[i] = n+1
            }
            else {
                r[i] = st.top(); // r[i] là phần tử trước đó trong stack
            }
            st.push(i); // push index của phần tử vào stack
        }
        long long ans = 0; // khởi tạo giá trị ans ban đầu là 0
        for(int i = 1; i <= n; i++) {
            ans = max(ans, (long long)a[i] * (r[i] - l[i] - 1)); // tính giá trị của ans theo công thức
        }
        cout << ans << endl; // xuất kết quả
    }
    return 0;
}
