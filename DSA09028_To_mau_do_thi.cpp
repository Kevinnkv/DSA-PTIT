#include <iostream>
#include <vector>

using namespace std;

vector<int> colors;  // Mảng lưu màu của các đỉnh
vector<vector<int>> graph;  // Ma trận kề của đồ thị

bool isSafe(int v, int color, int V) {
    // Kiểm tra xem có đỉnh kề với đỉnh v có cùng màu không
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && colors[i] == color) {
            return false;
        }
    }
    return true;
}

bool graphColoringUtil(int V, int M, int v) {
    // Nếu đã tô màu hết các đỉnh thì trả về true
    if (v == V) {
        return true;
    }

    // Thử tô màu cho đỉnh v từ 1 đến M
    for (int color = 1; color <= M; color++) {
        // Kiểm tra xem có thể tô màu color cho đỉnh v hay không
        if (isSafe(v, color, V)) {
            colors[v] = color;  // Gán màu cho đỉnh v

            // Tô màu cho các đỉnh tiếp theo
            if (graphColoringUtil(V, M, v + 1)) {
                return true;
            }

            colors[v] = 0;  // Hủy màu của đỉnh v nếu không tìm được lời giải
        }
    }

    return false;  // Không tìm được lời giải
}

bool graphColoring(int V, int M) {
    // Khởi tạo mảng colors
    colors.assign(V, 0);

    // Gọi đệ quy để tô màu cho đồ thị
    if (graphColoringUtil(V, M, 0)) {
        return true;
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int V, E, M;
        cin >> V >> E >> M;

        // Khởi tạo ma trận kề của đồ thị
        graph.assign(V, vector<int>(V, 0));

        // Đọc các cạnh của đồ thị và cập nhật ma trận kề
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            graph[u - 1][v - 1] = 1;
            graph[v - 1][u - 1] = 1;
        }

        // Kiểm tra xem có thể tô màu đồ thị sao cho hai đỉnh kề nhau có màu khác nhau hay không
        if (graphColoring(V, M)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
