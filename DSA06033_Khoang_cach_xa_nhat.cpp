#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first; // lưu giá trị
            a[i].second = i; // lưu chỉ số
        }
        sort(a, a + n);
        int ans = -1, Min = a[0].second;
        int k = a[0].first;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first > k)
                ans = max(ans, a[i].second - Min);
            if (a[i].second < Min)
            {
                Min = a[i].second;
                k = a[i].first;
            }
        }
        cout << ans << endl;
    }
    system("pause");
	return 0;	
}



