#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n,m,k; cin >> n >> m >>k;
        int a[n],b[m],c[k];
        for(int &i:a) cin >> i;
        for(int &j:b) cin >> j;
        for(int &h:c) cin >> h;
        int i=0,j=0,h=0;
        int check = 0;
        while(i<n && j<m && h<k){
            if(a[i]==b[j] && b[j]==c[h]){
                cout << a[i] << " ";
                check=1;
                i++;j++;h++;
            }
            else{
                int minn = min(min(a[i],b[j]),c[h]);
                if(a[i]==minn) i++;
                if(b[j]==minn) j++;
                if(c[h]==minn) h++;
            }
        }
        if(check==0) cout << "NO" << endl;
        else cout << endl;
    }
    system("pause");
    return 0;
}