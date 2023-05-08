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