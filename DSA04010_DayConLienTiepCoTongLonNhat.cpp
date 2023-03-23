#include <bits/stdc++.h>

using namespace std;
/*
Hướng giải tối ưu: dùng thuật toán kadane quy hoạch động
    Nếu các phần tử trong dãy toàn âm thì chỉ cần so sánh và tìm ra phần tử âm lớn nhất
    Nếu dãy có cả âm cả dương thì duyệt từ đầu đến cuối mảng 
        khai báo 2 tổng sum1,sum2;
        sum1 để cộng tổng các phần tử rồi so sánh với 0, nếu nhỏ hơn thì cập nhật sum1=0
        sum2 để so sánh với sum1 , tìm ra tổng lớn nhất

*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int sum1 = 0, sum2 = INT_MIN;
        for(int i=0;i<n;i++){
            sum1 += a[i];
            sum2 = max(sum1,sum2);
            if(sum1 < 0){
                sum1 = 0;
            }
        }
        cout << sum2 << endl;
    }
    system("pause");
    return 0;
}