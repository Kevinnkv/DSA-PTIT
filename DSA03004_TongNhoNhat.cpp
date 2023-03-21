#include <bits/stdc++.h>

using namespace std;
// bài toán yêu cầu chọn ra 2 số mà 2 số này được lấy từ các chữ số có trong mảng a
//  VD: a[6] = {2,4,3,5,6,8} ta có thể chọn 2 số bất kì như 2435 và 68 hoặc 243 và 568
// với mảng trên chỉ cần sắp xếp tăng dần và lấy tổng vị trí chẵn + tổng vt lẻ
// ta có 234 + 568 là nhỏ nhất vì 2 số ở cạnh là cặp nhỏ nhất để cộng cho các hàng đơn vị, chục,trăm...
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
        sort(a,a+n);
        long long sumc=0,suml=0;
        for(int i=0;i<n;i++){
            if(i % 2 == 0){
                sumc = 10*sumc +a[i];
            }
            else suml = 10*suml +a[i];
        }
        cout << sumc + suml << endl;
    }
	system("pause");
	return 0;	
}
