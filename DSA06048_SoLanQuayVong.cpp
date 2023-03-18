#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        long long b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(b[i]==a[0]){
                cout << i << endl;
                break;
            }
        }
    }
	system("pause");
	return 0;	
}
