#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a(n);
        stack<int> st; // khởi tạo stack
        vector <int> res(n,-1); // lưu kết quả
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--) { // duyệt từ phải qua trái
            while (!st.empty() && a[i] >= st.top()) { // lấy các phần tử lớn hơn hoặc bằng a[i] từ stack
                st.pop();
            }
            if (!st.empty()) { // nếu stack không rỗng, lấy phần tử đầu tiên trong stack là phần tử bên phải đầu tiên lớn hơn a[i]
                res[i] = st.top();
            }
            st.push(a[i]); // đưa a[i] vào stack
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}