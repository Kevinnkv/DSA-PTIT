#include <bits/stdc++.h>
using namespace std;

int l[] = {1, -1, 2, 2, 1, -1, -2, -2};
int r[] = {2, 2, 1, -1, -2, -2, 1, -1};

bool isValid(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

int findMinimumSteps(string start, string end) {
    queue<string> q;
    map<string, int> mp;

    q.push(start);
    mp[start] = 0;

    while (!q.empty()) {
        string s = q.front();
        q.pop();

        if (s == end) {
            return mp[s];
        }

        int currX = s[0] - 'a' + 1; // chuyển a thành 1 , b thành 2
        int currY = s[1] - '0'; //chuyển '1' thành 1, '2' thành 2
    
        for (int i = 0; i < 8; i++) { // cập nhật vị trí
            int nextX = currX + l[i];
            int nextY = currY + r[i];

            if (isValid(nextX, nextY)) { // kiểm tra vị trí có nằm trong bàn cờ không
                string nextPos = ""; // chuyển vị trí về dạng chuỗi
                nextPos += (nextX - 1) + 'a';
                nextPos += nextY + '0';

                if (mp.find(nextPos) == mp.end()) { // kiểm tra vị trí mưới đã được xst duyệt hay chưa
                    mp[nextPos] = mp[s] + 1; // đếm số bước từ vị trí ban đầu đến vị trí nextpos
                    q.push(nextPos); // đẩy vị trí mới vào hàng đợi và tiếp tục xét đến khi đi được đến vị trí cuối cùng
                }
            }
        }
    }

    return -1; // No valid path found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string start, end;
        cin >> start >> end;

        int minSteps = findMinimumSteps(start, end);
        cout << minSteps << endl;
    }

    return 0;
}
