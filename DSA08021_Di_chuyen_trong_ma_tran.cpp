#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;
int T, M, N;
int A[MAXN][MAXN], dist[MAXN][MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> M >> N;
        for (int i = 1; i <= M; i++) {
            for (int j = 1; j <= N; j++) {
                cin >> A[i][j];
                dist[i][j] = INT_MAX; // Khởi tạo khoảng cách vô cực
            }
        }
        dist[1][1] = 0; // Khoảng cách từ đỉnh xuất phát đến chính nó bằng 0

        queue<pair<int, int>> q;
        q.push({1, 1});

        while (!q.empty()) {
            int x = q.front().first, y = q.front().second;
            q.pop();

            if (x == M && y == N) {
                break; // Đã tìm thấy đích, dừng BFS
            }

            if (y + A[x][y] <= N && dist[x][y] + 1 < dist[x][y + A[x][y]]) {
                dist[x][y + A[x][y]] = dist[x][y] + 1;
                q.push({x, y + A[x][y]});
            }

            if (x + A[x][y] <= M && dist[x][y] + 1 < dist[x + A[x][y]][y]) {
                dist[x + A[x][y]][y] = dist[x][y] + 1;
                q.push({x + A[x][y], y});
            }
        }

        if (dist[M][N] == INT_MAX) {
            cout << -1 << endl; // Không có đường đi từ đỉnh xuất phát đến đích
        } else {
            cout << dist[M][N] << endl; // In ra khoảng cách ngắn nhất từ đỉnh xuất phát đến đích
        }
    }

    return 0;
}
