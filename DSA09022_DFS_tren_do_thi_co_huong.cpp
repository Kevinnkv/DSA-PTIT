#include <bits/stdc++.h>
using namespace std;

int V, E,u,v;
bool vs[1001];
vector<vector<int> > adj;

void dfs(int u) {
    vs[u] = 1;
    cout << u << " ";
    for (auto v :  adj[u]) {
        if (vs[v] == 0) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        cin >> V >> E >> u;
        memset(vs,0,sizeof(vs));
        adj.resize(V+1);
        for (int i = 1; i <= V; i++) {
            adj[i].clear();
        }
        while (E--) {
        	int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        dfs(u);
        cout << endl;
    }
    return 0;
}

