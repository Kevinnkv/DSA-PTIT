#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int sum1=0,sum2=0;
        for(int i=0;i<min(k,n-k);i++){
            sum1 += a[i];
        }
        for(int i=min(k,n-k);i<n;i++){
            sum2 += a[i];
        }
        cout << abs(sum2-sum1) << endl;
    }
	system("pause");
	return 0;	
}
