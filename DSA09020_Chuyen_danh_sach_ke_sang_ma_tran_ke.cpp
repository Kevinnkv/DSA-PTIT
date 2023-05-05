#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            int j = stoi(tmp);
            // cout << j << endl;
            a[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
