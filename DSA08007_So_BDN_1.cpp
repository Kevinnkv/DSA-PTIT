#include <bits/stdc++.h>

using namespace std;
// Nếu để hàm khỏi tạo các giá trị của vector kết quả v vào trong bộ test sẽ bị lỗi TLE
// Nếu tính luôn 1 lần rồi với mỗi bộ test ta chỉ việc check rồi in ra res sẽ tiết kiệm rất nhiều thời gian !!!
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    queue <string> q;
    vector<long long >v;
    q.push("1");
    while(!q.empty()){
        string s = q.front();
        if(s.size()==19) break; //các số phải thỏa mãn nhỏ hơn n= 2^63 < 10^19(không quá 18 chữ số)
        q.pop();
        q.push(s+"0");
        q.push(s+"1");
        v.push_back(stoll(s));//chuyển s dạng chuỗi về kiểu DL long long
    }
    while(t--){
        long long n; cin >> n;
        long long res = upper_bound(v.begin(),v.end(),n)-v.begin(); // tim vi tri nho nhat ben phai ma gia tri nho hon n
        cout << res << endl;
    }
    system("pause");
    return 0;
}
