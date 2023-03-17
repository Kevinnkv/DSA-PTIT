// TLE
/*
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
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                cnt++;
            } 
        }
        if(cnt==3) check=1;
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
        if(check==1) cout << "YES" << endl;
        else cout << "NO" << endl;   
    }
        
    system("pause");
	return 0;	
}
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n,k;
        cin >> n >>k;
        long long a[n];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        int check=0;
        for(int i=1;i<=n-1;i++){
            for(int j=i+1;j<=n;j++){
                if(binary_search(a+j+2,a+n+1,k-a[i]-a[j])){
                    check=1;
                    break;
                }
            }
            if(check==1) break;
        }
        if(check==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
        
    system("pause");
	return 0;	
}



