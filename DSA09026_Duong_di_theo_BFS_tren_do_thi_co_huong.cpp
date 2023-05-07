#include <bits/stdc++.h>
using namespace std;

int V,E,s,t;
vector<int> adj[1001];
bool vs[1001];
int parent[1001]; // luu cac dinh ke phia truoc no (node cha)

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = 1;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int x : adj[v]){
			if(vs[x] == 0){
				vs[x] = 1;
				q.push(x);
				parent[x] = v; // luu cac dinh phia truoc no de tim duong di
			}
		}
	}
}

void Solve(){
	bfs(s);
	if(vs[t] == 0){ // dinh t chua duyet tuc la khong co duong di
		cout << "-1" << endl;
	}else{
		vector <int> path; // luu cac dinh tren duong di tu t ve s
		while(s != t){
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for(int it : path){
			cout << it << " ";
		}
		cout << endl;
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    while(n--){
        cin >> V >> E >> s >> t;
        for(int i = 1; i <= V; i++){
            adj[i].clear(); 
        }
        memset(vs,0,sizeof(vs));
        memset(parent,0,sizeof(parent));
        while(E--){
            int x,y;
            cin >> x >> y;
			adj[x].push_back(y);
        }
        Solve();
    }
    return 0;
}
