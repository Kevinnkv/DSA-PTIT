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
        int l,r;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                l=i+1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i] != b[i]){
                r=i+1;
                break;
            }
        }
        cout << l << " " << r << endl;
    }
	system("pause");
	return 0;	
}
