#include <bits/stdc++.h>
using namespace std;

int n,m;
vector <int> adj[10001];
bool vs[10001];
void dfs(int u){
    vs[u]=1;
    for(int x:adj[u]){
        if(vs[x] == 0){
            dfs(x);
        }
    }
}

void Solve(int x,int y){
    dfs(x);
    if(vs[y] == 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        memset(adj,0,sizeof(adj));
        cin >> n >> m; // n dinh m canh
        while(m--){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int q; cin >> q;
        while(q--){
            int x,y; 
            cin >> x >> y;
            memset(vs,0,sizeof(vs));
            Solve(x,y);
        }
    }
    system("pause");
    return 0;
}
// cách dùng tối ưu sử dụng Disjont set
#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1000;
int parent[MAXN+1];

// Hàm tìm tập hợp (set) chứa đỉnh u
int find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

// Hàm gộp hai tập hợp chứa u và v thành một tập hợp
void merge(int u, int v) {
    int pu = find(u), pv = find(v);
    if (pu != pv) parent[pu] = pv;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;

        // Khởi tạo mỗi đỉnh là một tập hợp độc lập
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }

        // Gộp các tập hợp chứa đỉnh được nối bởi các cạnh
        while (m--) {
            int u, v; cin >> u >> v;
            merge(u, v);
        }

        // Kiểm tra truy vấn
        int q; cin >> q;
        while (q--) {
            int x, y; cin >> x >> y;
            if (find(x) == find(y)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
