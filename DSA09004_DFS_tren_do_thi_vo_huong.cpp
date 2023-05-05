#include <bits/stdc++.h>
using namespace std;

int V, E, u, v, x, y;// V đỉnh E cạnh
vector<vector<int>> G; // vector 2 chiều G lưu số đỉnh x và số cạnh y
vector<bool> vs; // check visited

void dfs(int u) {
    stack<int> st;
    st.push(u);
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (vs[u] == false) {
            cout << u << " ";
            vs[u] = true;
        }
        for (int v : G[u]) { // xét đỉnh kề của u
            if (vs[v] == false) {
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

void Solve(){
    cin >> V >> E >> u;
    G.clear(); G.resize(V + 1);
    vs.clear(); vs.resize(V + 1, 0);
    while (E--) {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        Solve();
        cout << endl;
    }
    return 0;
}