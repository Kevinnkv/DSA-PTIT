#include <bits/stdc++.h>

using namespace std;

int n,k,oki;
int a[1005],b[1005];
int check;
void Solve(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += a[i]*b[i];
    }
    if(sum==k){
        check=1;
        cout << "[";
        int sum1=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                sum1 += b[i];
                cout <<b[i]; 
                if(sum1!=k) cout << " ";
                else cout << "] ";
            } 
        }
    }
}
void Try(int i){
    for(int j=1;j>=0;j--){
        a[i]=j;
        if(i==n) Solve();
        else Try(i+1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        check=0;
        cin >> n >>k;
        for(int i=1;i<=n;i++){
            cin >> b[i];
        }
        sort(b+1,b+n+1);
        Try(1);
        if(check==0) cout << "-1";
        cout<< endl;    
    }
        
    system("pause");
	return 0;	
}



