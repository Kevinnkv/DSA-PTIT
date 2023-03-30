#include <bits/stdc++.h>
 
using namespace std;
int n,a[100005],check[1005];
// vector <int> v;
void in(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
int Solve(){
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i+1])==1) return 0;
    }
    return 1;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j]==0){
            a[i]=j;
            check[j]=1;
            if(i==n){
                if(Solve()) in();
            }
            else Try(i+1);
            check[j]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
    }
    system("pause");
    return 0;
}