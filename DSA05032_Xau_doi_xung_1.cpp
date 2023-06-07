#include <bits/stdc++.h>
using namespace std;

int minInsertions(string str) {
    int n = str.length();

    // Tạo bảng lưu số phép chèn tối thiểu để làm cho một phần xâu trở thành đối xứng
    int dp[n][n] = {0};

    // Duyệt qua xâu từ độ dài 2 đến n
    for (int len = 2; len <= n; len++) {
        // Duyệt qua từng cặp chỉ số (i, j) đại diện cho phần xâu từ i đến j
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            // Nếu hai ký tự đầu và cuối của phần xâu hiện tại giống nhau
            if (str[i] == str[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
            }
        }
    }

    // Trả về số phép chèn tối thiểu để trở thành xâu đối xứng
    return dp[0][n - 1];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        int result = minInsertions(str);
        cout << result << endl;
    }

    return 0;
}
