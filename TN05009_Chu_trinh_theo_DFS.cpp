#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int vs[1001];
vector <int> ans;
int n,m,u,v;
void Dfs(int u, int pre, vector<int> path) {
    vs[u] = true;
    for (int v : adj[u]) {
        if (v == 1 && v != pre && ans.empty()) {
            path.push_back(v);
            ans = path;
            return;
        }
        if (!vs[v]) {
            path.push_back(v);
            Dfs(v, u, path);
            path.pop_back();
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        memset(vs,0,sizeof(vs));
        memset(adj,0,sizeof(adj));
        ans.clear();

        while (m--) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (auto &i : adj) {
            sort(i.begin(), i.end());
        }

        Dfs(1, -1, {1});
        if (ans.empty()) {
            cout << "NO";
        } else {
            for (int i : ans)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
