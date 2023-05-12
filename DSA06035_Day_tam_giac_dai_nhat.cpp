#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int l[n]={},r[n]={};
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                l[i] = l[i - 1] + 1;
            }
            else
                l[i] = 1;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                r[i] = r[i + 1] + 1;
            }
            else
                r[i] = 1;
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = max(res, l[i] + r[i] - 1);
        }
        cout << res << endl;
    }
    system("pause");
	return 0;	
}



