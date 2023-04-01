#include <bits/stdc++.h>

using namespace std;
// ý tưởng như bài CHUYỂN DANH SÁCH CẠNH SANG DANH SÁCH KỀ, vì là đồ thị có hướng nên 1 cặp đỉnh chỉ xuất hiện 1 lần
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int v,e; // v dinh , e canh
        int x,y; // x la dinh dau,y la dinh cuoi
        cin >> v >> e;
        vector<vector<int>> g(v + 1);
        while(e--){
            cin >> x >> y;
            g[x].push_back(y);
            // g[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            cout << i << ": ";
            for(int j:g[i]) cout << j << " ";
            cout << endl;
        }
        cout << endl;
    }
    
    system("pause");
	return 0;	
}



