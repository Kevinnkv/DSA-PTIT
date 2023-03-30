#include <bits/stdc++.h>
 
using namespace std;
// priority_queue : hàng đợi ưu tiên
/*
giải thích test 4 3 2 6
    - cần sắp xếp tăng dần 2 3 4 6 
    - lần 1 nối 2 phần tử đầu ta có tổng = 5, khi đó ta có 3 dây có dộ dài 4,5,6
    - lần 2 nối tiếp 2 phần tử đầu tiên, cập nhật tổng 5+9=14 , ta còn 2 dây 6,9
    - lần 3 ta được 1 đoạn dây có độ dài 15 , sau 3 lần thì tổng chi phí là 14+15 = 29
    
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        priority_queue<int,vector<int>,greater<int>> pq; // lấy ra phần tử nhỏ nhất trước
        for(int i=0;i<n;i++){
            cin >> a[i];
            pq.push(a[i]); // đẩy các phần từ vào hàng đợi 
        }
        long long res=0;
        while(pq.size()>1){ // kết thúc khi trong hàng đợi còn 1 phần tử, chính là độ dài 1 dây đã nối xog
            int min1 = pq.top(); // lấy ra phần tử nhỏ nhất 
            pq.pop(); // xóa phần tử vừa lấy khỏi top
            int min2 = pq.top(); // lấy ra phần tử nhỏ thứ 2
            pq.pop();
            res += min1 + min2; // cập nhật tổng giá trị
            pq.push( min1 + min2); // tiếp tục đẩy tổng vào hàng đợi ưu tiên để chọn ra 2 số nhỏ nhất
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}