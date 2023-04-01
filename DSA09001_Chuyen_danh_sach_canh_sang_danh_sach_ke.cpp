#include <bits/stdc++.h>

using namespace std;

/* CHUYỂN DANH SÁCH CẠNH SANG DANH SÁCH KỀ
    danh sách cạnh gồm đỉnh đầu và đỉnh cuối được sắp xếp theo thứ tự tăng dần, liệt kê theo cặpđỉnh và không bị lặp lại
    danh sách kề là liệt kê tất cả đỉnh nối với 1 đỉnh i bất kì
    Ý tưởng:
    Tạo 1 vector 2 chiều lưu đỉnh đầu và đỉnh cuối
        Duyệt từng cặp đỉnh 
            đẩy các phần tử đỉnh cuối vào vector đỉnh đầu ;
            đẩy các phần tử đỉnh đầu vào vector đỉnh cuối;
        Khi duyệt hết tất cả các cặp đỉnh , ta được danh sách kề
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int v,e;
        int x,y; // x la dinh dau,y la dinh cuoi
        cin >> v >> e;
        vector<vector<int>> g(v + 1);
        while(e--){
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
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



